#include "ConcreteFactory1.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"
int main()
{
	ConcreteFactory1 factory;
	AbstractProductA* productA = factory.createProductA();
	AbstractProductB* productB = factory.createProductB();
	productA->use();
	productB->eat();
	return 0;
}
