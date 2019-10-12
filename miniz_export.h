#pragma once


/* Works around MSVC's spammy "warning C4127: conditional expression is constant" message. */
#if defined(_MSC_VER) && defined(MINIZ_DLL) && MINIZ_DLL
	#if defined(MINIZ_DLL_EXPORT) && MINIZ_DLL_EXPORT
		#define MINIZ_EXPORT __declspec(dllexport)
	#else
		#define MINIZ_EXPORT __declspec(dllimport)
	#endif
#else
	#define MINIZ_EXPORT 
#endif

