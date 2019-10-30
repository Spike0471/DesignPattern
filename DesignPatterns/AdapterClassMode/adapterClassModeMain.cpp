#include "Adapter.h"

int main() 
{
	Target* tar = new Adapter();
	tar->request();
	delete tar;
	return 0;
}