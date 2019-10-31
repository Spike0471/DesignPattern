#pragma once
#include "Decorator.h"
class ConcreteDecoratorB :public Decorator
{
public:
	ConcreteDecoratorB(Component* comp);
	virtual void operation();
	void addBehavior();
};

