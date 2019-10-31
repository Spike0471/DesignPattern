#pragma once
#include "Flyweight.h"

class UnsharedConcreteFlyweight :public Flyweight
{
private:
	int allState;
public:
	void operation();
};

