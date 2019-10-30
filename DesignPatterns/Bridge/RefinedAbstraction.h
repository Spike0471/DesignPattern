#pragma once
#include "Abstraction.h"
class RefinedAbstraction :public Abstraction
{
public:
	void operation();
	RefinedAbstraction(Implementor* imp);
};

