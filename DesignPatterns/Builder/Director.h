#pragma once

class Builder;
class Product;
class Director
{
	Builder* builder;
public:
	void setBuilder(Builder* b);
	Product* construct();
};

