#pragma once

class AbstractProductA;
class AbstractProductB;

class AbstractFactory
{
public:
	virtual AbstractProductA* createProductA() = 0;
	virtual AbstractProductB* createProductB() = 0;
};

