#pragma once
#include <vector>
#include <array>
#include <memory>
#include <functional>

struct mesh_t
{
	std::vector<float> vertices;
	std::vector<int> triangles;

	// void build(typename Surface_mesh& mesh)const {}
};

struct i_mesh
{
	double rate = 0.0;
	i_mesh() = default;
	virtual ~i_mesh() {}
	virtual int add_vertex(const std::array<float, 3>&) { return -1; }
	virtual int add_triangle(const std::array<int, 3>&, const std::array<float, 3>&) { return -1; }

	virtual void get_vertices(std::function<void(int, const std::array<float, 3>&)> op)const = 0;
	virtual void get_triangles(std::function<void(const std::array<int, 3>&)> op)const = 0;

	virtual std::shared_ptr<i_mesh> create()const { return {}; }
};

bool mesh_subtract(const i_mesh& left, const i_mesh& right, std::vector<std::shared_ptr<i_mesh>>& out_meshes);


