#include "Adaptee.h"
#include "Adapter.h"

int main()
{
	Adaptee adaptee;
	Target* tar =new Adapter(&adaptee);
	tar->request();
	return 0;
}