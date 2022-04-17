#pragma once

#ifdef NC_PLATFORM_WINDOWS
	#ifdef NC_BUILD_DLL
		#define NUCLEU_API __declspec(dllexport)
	#else
		#define NUCLEU_API __declspec(dllimport)
	#endif
#else
	#error Nucleu only supports Windows!
#endif