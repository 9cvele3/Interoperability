#pragma once

#ifdef LIB_C_EXPORTS
#define LIB_C_API __declspec(dllexport)
#else
#define LIB_C_API __declspec(dllimport)
#endif

LIB_C_API int getSomeNumber();
LIB_C_API float getSomeFloat();
