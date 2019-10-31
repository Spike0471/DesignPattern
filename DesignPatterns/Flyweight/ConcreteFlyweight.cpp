#include "ConcreteFlyweight.h"
#include <iostream>
using namespace std;

void ConcreteFlyweight::operation()
{
	cout << intrinsicState << endl;
}
