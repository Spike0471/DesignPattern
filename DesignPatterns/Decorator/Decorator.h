#pragma once
#include "Component.h"
class Decorator :public Component
{
protected:
	Component* m_comp;
public:
	Decorator(Component* comp) { m_comp = comp; }
	virtual void operation() = 0;
	virtual void addBehavior() = 0;
};

