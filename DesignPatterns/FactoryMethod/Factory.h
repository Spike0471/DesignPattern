#pragma once

class Product;
class Factory
{
public:
	virtual Product* factoryMethod() = 0;
};

