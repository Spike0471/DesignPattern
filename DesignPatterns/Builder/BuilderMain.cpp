#include "ConcreteBuilder.h"
#include "Director.h"
#include "Product.h"

int main() 
{
	ConcreteBuilder builder;
	Director director;
	director.setBuilder(&builder);
	Product* product = director.construct();
	product->show();
	return 0;
}