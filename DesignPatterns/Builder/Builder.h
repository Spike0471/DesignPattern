#pragma once
#include "Product.h"

class Builder
{
protected:
	Product m_product;
public:
	virtual void buildPartA() = 0;
	virtual void buildPartB() = 0;
	virtual void buildPartC() = 0;
	Product* getResult();
};

