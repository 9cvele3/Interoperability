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

int TestClass::getNum()
{
	return 18;
}