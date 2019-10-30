#pragma once

#include "AbstractFactory.h"
class AbstractProductA;
class AbstractProductB;
class ConcreteFactory1 :public AbstractFactory
{
public:
	AbstractProductA* createProductA();
	AbstractProductB* createProductB();
};

