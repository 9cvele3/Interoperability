// lib_cpp_wrapper.h

//#pragma once
using namespace System; //ovo mora na pocetku
#pragma comment(lib, "lib_cpp.lib")
#include "../lib_cpp/TestClass.h"

namespace lib_cpp_wrapper {

	public ref class TestClassWrapper
	{
	public:
		TestClassWrapper()
		{
			tc = new TestClass();
		}

		~TestClassWrapper()
		{
			delete tc;
		}

		int getNumPublic()
		{
			return tc->getNumPublic();
		}

	private:
		TestClass* tc;
	};
}
