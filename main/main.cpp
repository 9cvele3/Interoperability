#pragma comment(lib, "lib_c.lib")
#pragma comment(lib, "lib_cpp.lib")

extern "C" {
#include "../lib_c/functions.h"
}
#include "../lib_cpp/TestClass.h"
#include <iostream>

void main()
{
	std::cout << getSomeNumber() << " " << getSomeFloat() << "blabla" << " asdf" << std::endl;

	TestClass tc;
	std::cout << tc.getNumPublic() << std::endl;
	int x;
	std::cin >> x;
}
