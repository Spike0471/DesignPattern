#pragma once
#include "Builder.h"
class ConcreteBuilder :public Builder
{
public:
	void buildPartA();
	void buildPartB();
	void buildPartC();
};

