#include "Product.h"
#include<iostream>
using namespace std;

void Product::setA(std::string str)
{
	a = str;
}

void Product::setB(std::string str)
{
	b = str;
}

void Product::setC(std::string str)
{
	c = str;
}

void Product::show()
{
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}
