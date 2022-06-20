#pragma once

#ifdef AS_PLATFORM_WINDOWS
	#ifdef AS_BUILD_DLL
		#define ATLAS_API _declspec(dllexport)
	#else
		#define ATLAS_API _declspec(dllimport)
	#endif
#else
	#error Atlas only supports Windows! (currently)
#endif