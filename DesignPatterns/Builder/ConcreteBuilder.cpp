#include "ConcreteBuilder.h"

void ConcreteBuilder::buildPartA()
{
	m_product.setA("AAA");
}

void ConcreteBuilder::buildPartB()
{
	m_product.setB("BB");
}

void ConcreteBuilder::buildPartC()
{
	m_product.setC("C");
}
