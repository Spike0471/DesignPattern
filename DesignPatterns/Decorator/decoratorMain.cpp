#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"

int main() 
{
	Component* comp = new ConcreteComponent();
	Decorator* decoratorA = new ConcreteDecoratorA(comp);
	Decorator* decoratorB = new ConcreteDecoratorB(comp);
	decoratorA->operation();
	decoratorB->operation();
	return 0;
}