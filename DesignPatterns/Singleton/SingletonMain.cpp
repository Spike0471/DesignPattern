#include "Singleton.h"

int main() 
{
	Singleton& singleton = Singleton::GetInstance();
	singleton.show();
	return 0;
}