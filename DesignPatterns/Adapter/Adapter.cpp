#include "Adapter.h"
#include "Adaptee.h"

Adapter::Adapter(Adaptee* adap)
{
	adaptee = adap;
}

void Adapter::request()
{
	if(adaptee)
		adaptee->specificRequest();
}
