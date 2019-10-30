#pragma once
#include "Factory.h"
class ConcreteFactory :public Factory
{
public:
	Product* factoryMethod();
};

