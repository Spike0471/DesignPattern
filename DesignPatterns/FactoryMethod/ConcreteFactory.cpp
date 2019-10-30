#include "ConcreteFactory.h"
#include "ConcreteProduct.h"

Product* ConcreteFactory::factoryMethod()
{
	return new ConcreteProduct();
}
