#pragma once
#include "AbstractFactory.h"
class ConcreteFactory2 :public AbstractFactory
{
public:
	AbstractProductA* createProductA();
	AbstractProductB* createProductB();
};

