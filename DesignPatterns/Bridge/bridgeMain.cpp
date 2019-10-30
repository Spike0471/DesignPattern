#include "ConcreteImplementorA.h"
#include "ConcreteImplementorB.h"
#include "RefinedAbstraction.h"

int main() 
{
	Implementor* implementorA = new ConcreteImplementorA();
	Implementor* implementorB = new ConcreteImplementorB();
	Abstraction* abstractionA = new RefinedAbstraction(implementorA);
	Abstraction* abstractionB = new RefinedAbstraction(implementorB);
	abstractionA->operation();
	abstractionB->operation();
	return 0;
}