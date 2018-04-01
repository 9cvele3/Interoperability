#include "TestClass.h"

TestClass::TestClass()
{
}


TestClass::~TestClass()
{
}

int TestClass::getNumPublic()
{
	return getNum() + 12;
}

void TestClass::screenCapture()
{
}
int TestClass::getNum()
{
	return 18;
}