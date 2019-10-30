#pragma once
#include "Target.h"

class Adaptee;
class Adapter : public Target
{
private:
	Adaptee* adaptee;
public:
	Adapter(Adaptee* adap);
	void request();
};

