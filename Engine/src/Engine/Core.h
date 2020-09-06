#pragma once

#ifdef PLATFORM_WINDOWS
	#ifdef BUILD_DLL
		#define API __declspec(dllexport)
	#else
		#define API __declspec(dllimport)
	#endif //  BUILD_DLL
#else
	#error Engine supports only Windows!
#endif //  PLATFORM_WINDOWS
