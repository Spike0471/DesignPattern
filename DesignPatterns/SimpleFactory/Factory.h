#pragma once

class Product;

class Factory
{
public:
	Product* createProduct(const char* arg);
};

