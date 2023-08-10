#pragma once

#if NT_PLATFORM_WINDOWS
	#if NT_BUILD_DLL
		#define NEVTIDE_API __declspec(dllexport)
	#else
		#define NEVTIDE_API __declspec(dllimport) 
	#endif
#else
	#error NeverTide supported only on Windows
#endif