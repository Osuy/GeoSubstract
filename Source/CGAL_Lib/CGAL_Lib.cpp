#include "include/CGAL_Lib.h"  
#include <CGAL/Exact_predicates_exact_constructions_kernel.h>
#include <CGAL/Exact_predicates_exact_constructions_kernel_with_root_of.h>
#include <CGAL/Surface_mesh.h>  
// 基础PMP功能
#include <CGAL/Polygon_mesh_processing/triangulate_faces.h>
#include <CGAL/Polygon_mesh_processing/repair.h>
#include <CGAL/Polygon_mesh_processing/remesh.h>
#include <CGAL/Polygon_mesh_processing/autorefinement.h>
// 布尔运算
#include <CGAL/Polygon_mesh_processing/corefinement.h>

// 自相交检测
#include <CGAL/Polygon_mesh_processing/self_intersections.h>
#include <unordered_map>

#ifdef _DEBUG
#include <iostream>
using std::cout;
using std::endl;
#endif
#include <map>

typedef CGAL::Simple_cartesian<float> Kernel;
typedef Kernel::Point_3 Point_3;
typedef CGAL::Surface_mesh<Point_3> Surface_mesh;
using vertex_descriptor = boost::graph_traits<Surface_mesh>::vertex_descriptor;
using face_descriptor = boost::graph_traits<Surface_mesh>::face_descriptor;

namespace PMP = CGAL::Polygon_mesh_processing;

void build(const i_mesh& data, Surface_mesh& mesh)
{
	std::unordered_map<int, vertex_descriptor> vid_map;

	auto for_each_vertex = [&mesh, &vid_map](int index, const std::array<float, 3>& point)
		{
			if (!vid_map.contains(index))
			{
				vid_map[index] = mesh.add_vertex(Point_3{ point[0], point[1], point[2] });
			}
		};
	data.get_vertices(for_each_vertex);

	auto for_each_triangles = [&mesh, &vid_map](const std::array<int, 3>& triangle)
		{
			if (vid_map.contains(triangle[0]) && vid_map.contains(triangle[1]) && vid_map.contains(triangle[2]))
			{
				mesh.add_face(vid_map[triangle[0]], vid_map[triangle[1]], vid_map[triangle[2]]);
			}
		};
	data.get_triangles(for_each_triangles);
}

void build(const Surface_mesh& mesh, i_mesh& data)
{
	std::array<float, 3> point;
	std::unordered_map<vertex_descriptor, int> vertex_map;
	for (vertex_descriptor vd : mesh.vertices())
	{
		auto p = mesh.point(vd);
		point[0] = p.x();
		point[1] = p.y();
		point[2] = p.z();
		vertex_map[vd] = data.add_vertex(point);
	}

	int i = 0;
	auto& normal = point;
	std::array<int, 3> tri;
	for (face_descriptor fd : mesh.faces())
	{
		i = 0;
		for (vertex_descriptor vd : vertices_around_face(halfedge(fd, mesh), mesh))
		{
			assert(i < 3);
			tri[i++] = vertex_map[vd];
		}
		auto nml = PMP::compute_face_normal(fd, mesh);
		normal[0] = nml.x();
		normal[1] = nml.y();
		normal[2] = nml.z();
		data.add_triangle(tri, normal);
	}
}

bool mesh_subtract(const i_mesh& left, const i_mesh& right, std::vector<std::shared_ptr<i_mesh>>& out_meshes)
{
	Surface_mesh base;
	Surface_mesh subtractor;
	Surface_mesh result;
	// Build the meshes from the input data  
	build(left, base);
	build(right, subtractor);

	auto V = PMP::volume(base);

	//// 3. 处理非流形顶点 - 6.0.1中函数可能有变化
	//PMP::duplicate_non_manifold_vertices(mesh,
		// CGAL::parameters::all_default());

	// 4. 检测并修复自相交
	/* if (PMP::does_self_intersect(mesh))
	{
		Surface_mesh refined_mesh;
		bool success = PMP::refine_and_stitch(
			mesh,
			refined_mesh,
			PMP::parameters::stitch_all_vertices(true)
		);

		if (success) {
			mesh = std::move(refined_mesh);
		}
	}*/

	// 5. 合并重复顶点 - 6.0.1新API
	/*PMP::merge_duplicate_vertices(mesh,
		CGAL::parameters::vertex_point_map(get(CGAL::vertex_point, mesh))
		.geom_traits(Kernel()));*/

	if (PMP::corefine_and_compute_difference(base, subtractor, result))
	{
		/*PMP::stitch_borders(result);
		PMP::remove_degenerate_faces(result);
		PMP::remove_isolated_vertices(result);
		PMP::remove_almost_degenerate_faces(result,
			PMP::parameters::vertex_point_map(result.points()).geom_traits(Kernel()));
		result.collect_garbage();*/
		// 4. 验证结果
		if (result.is_valid()/* && PMP::is_polygon_soup_a_polygon_mesh(result)*/)
		{
			std::vector<Surface_mesh> components;
			PMP::split_connected_components(result, components);
			components.erase(
				std::remove_if(
					components.begin(),
					components.end(),
					[](const Surface_mesh& m) { return m.number_of_vertices() < 4; }
				),
				components.end()
			);

			for (size_t i = 0; i < components.size(); ++i)
			{
				if (!PMP::does_bound_a_volume(components[i]))continue;
#ifdef _DEBUG
				cout << components[i] << endl;
#endif
				out_meshes.emplace_back(left.create());
				auto mesh = out_meshes.back().get();
				mesh->rate = PMP::volume(components[i]) / V;
				build(components[i], *mesh);
			}

			return true;
		}
	}

	return false;
}