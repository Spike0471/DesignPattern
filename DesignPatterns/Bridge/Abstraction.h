#pragma once
#include "Implementor.h"
class Abstraction
{
protected:
	Implementor* m_imp;
public:
	virtual void operation() = 0;
	Abstraction(Implementor* imp) { m_imp = imp; }
};