#include "Factory.h"
#include "Product.h"

int main()
{
	Factory factory;
	Product * product = factory.createProduct("A");
	product->use();
	return 0;
}