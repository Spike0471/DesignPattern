#include "Factory.h"
#include "ConcreteProductA.h"
#include "ConcreteProductB.h"
#include<string.h>

Product* Factory::createProduct(const char* arg)
{
	if (strcmp(arg, "A") == 0) 
	{
		return new ConcreteProductA();
	}
	if (strcmp(arg, "B") == 0)
	{
		return new ConcreteProductA();
	}
	return nullptr;
}
