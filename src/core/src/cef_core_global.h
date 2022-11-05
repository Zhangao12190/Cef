#pragma once

#ifdef CEF_CORE_LIB
#define CEF_CORE_API _declspec(dllexport)
#else
#define CEF_CORE_API _declspec(dllimport)
#endif