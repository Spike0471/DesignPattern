#include "ConcreteDecoratorB.h"
#include<iostream>
using namespace std;

ConcreteDecoratorB::ConcreteDecoratorB(Component* comp) :
	Decorator::Decorator(comp)
{
}

void ConcreteDecoratorB::operation()
{
	if (m_comp)
		m_comp->operation();
	addBehavior();
}

void ConcreteDecoratorB::addBehavior()
{
	cout << "Add behavior from B" << endl;
}
