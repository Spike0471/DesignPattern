#pragma once
#include "Flyweight.h"
#include<string>
class ConcreteFlyweight :public Flyweight
{
private:
	std::string intrinsicState;
public:
	void operation();
	ConcreteFlyweight(std::string str) { intrinsicState = str; }
};

