// lib_cpp_wrapper.h

//#pragma once
using namespace System; //ovo mora na pocetku
//#pragma comment(lib, "lib_cpp.lib")
#include <TestClass.h>
//#include <Windows.h>

namespace lib_cpp_wrapper {

	public delegate void singleArgDelegate(int);

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

		void work()
		{
			for (int i = 1; i <= 100; i++) {
				//Sleep(30);
				for (int j = 0; j < 30000; j++);
				ProgressChangedEvent(i);
			}
		}
		event singleArgDelegate^ ProgressChangedEvent {
			void add(singleArgDelegate^ eventHandler) {
				_Action += eventHandler;
			}
			void remove(singleArgDelegate^ eventHandler) {
				_Action -= eventHandler;
			}
			void raise(int i) {
				if (_Action)
					_Action->Invoke(i);
			}
		}
	private:
		TestClass* tc;
		singleArgDelegate^ _Action;
	};
}
