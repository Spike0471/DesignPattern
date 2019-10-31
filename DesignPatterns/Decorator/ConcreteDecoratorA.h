#pragma once
#include "Decorator.h"
class ConcreteDecoratorA :public Decorator
{
public:
	ConcreteDecoratorA(Component* comp);
	virtual void operation();
	void addBehavior();
};

