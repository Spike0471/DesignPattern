#include "ConcreteFactory.h"
#include "Product.h"

int main()
{
	ConcreteFactory factory;
	Product* product = factory.factoryMethod();
	product->use();
	return 0;
}