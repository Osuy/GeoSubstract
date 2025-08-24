// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class CGAL_Lib : ModuleRules
{
	public CGAL_Lib(ReadOnlyTargetRules Target) : base(Target)
	{
		//PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        //// CGAL
        //PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "boost_1_78_0"));
        //PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "CGAL", "include", "CGAL")); // ����CGAL/config.h
        //PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "boost_1_78_0"));

        //// GMP/MPFR
        //PublicAdditionalLibraries.Add(Path.Combine(ThirdPartyPath, "gmp", "lib", "libgmp-10.lib"));
        //PublicAdditionalLibraries.Add(Path.Combine(ThirdPartyPath, "gmp", "lib", "libmpfr-4.lib"));

        //PublicDefinitions.Add("CGAL_USE_GMP=1");
        //PublicDefinitions.Add("CGAL_USE_MPFR=1");
        //bUseRTTI = true;
        //bEnableExceptions = true;

        //PublicDefinitions.Add("_SCL_SECURE_NO_WARNINGS"); // ���ð�ȫ����
        //PublicSystemLibraries.Add("Shell32.lib");

        Type = ModuleType.External;

        // �����Ҫ���õĺ�
        //PublicDefinitions.Add("WITH_MYTHIRDPARTYLIBRARY=1");

        // ��Ӳ���İ���·��
        //PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "inc"));

        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include"));

        PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "x64/Release", "CGAL_Lib.lib"));
    }
}
