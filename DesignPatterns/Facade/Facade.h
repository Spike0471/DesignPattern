#pragma once
#include "SubSystemA.h"

class Facade
{
private:
	SubSystemA subsysA;
public:
	void wrapOperation();
};

