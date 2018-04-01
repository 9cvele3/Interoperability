#pragma once

#ifdef LIB_CPP_EXPORTS
#define LIB_CPP_API __declspec(dllexport)
#else
#define LIB_CPP_API __declspec(dllimport)
#endif

class TestClass
{
public:
	LIB_CPP_API TestClass();
	LIB_CPP_API ~TestClass();
	LIB_CPP_API int getNumPublic();
	LIB_CPP_API void screenCapture();

private:
	int getNum();
};

