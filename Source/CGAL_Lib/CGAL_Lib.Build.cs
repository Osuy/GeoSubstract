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
        //PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "CGAL", "include", "CGAL")); // 包含CGAL/config.h
        //PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "boost_1_78_0"));

        //// GMP/MPFR
        //PublicAdditionalLibraries.Add(Path.Combine(ThirdPartyPath, "gmp", "lib", "libgmp-10.lib"));
        //PublicAdditionalLibraries.Add(Path.Combine(ThirdPartyPath, "gmp", "lib", "libmpfr-4.lib"));

        //PublicDefinitions.Add("CGAL_USE_GMP=1");
        //PublicDefinitions.Add("CGAL_USE_MPFR=1");
        //bUseRTTI = true;
        //bEnableExceptions = true;

        //PublicDefinitions.Add("_SCL_SECURE_NO_WARNINGS"); // 禁用安全警告
        //PublicSystemLibraries.Add("Shell32.lib");

        Type = ModuleType.External;

        // 添加需要设置的宏
        //PublicDefinitions.Add("WITH_MYTHIRDPARTYLIBRARY=1");

        // 添加插件的包含路径
        //PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "inc"));

        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include"));

        PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "x64/Release", "CGAL_Lib.lib"));
    }
}
