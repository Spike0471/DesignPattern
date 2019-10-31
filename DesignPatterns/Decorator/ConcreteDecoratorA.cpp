#include "ConcreteDecoratorA.h"
#include<iostream>
using namespace std;

ConcreteDecoratorA::ConcreteDecoratorA(Component* comp):
	Decorator::Decorator(comp)
{
}

void ConcreteDecoratorA::operation()
{
	if (m_comp)
		m_comp->operation();
	addBehavior();
}

void ConcreteDecoratorA::addBehavior()
{
	cout << "Add behavior from A" << endl;
}
