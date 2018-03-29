#pragma comment(lib, "lib_c.lib")

extern "C" {
#include "../lib_c/functions.h"
}
#include <iostream>

void main()
{
	std::cout << getSomeNumber() << " " << getSomeFloat() << std::endl;
	int x;
	std::cin >> x;
}