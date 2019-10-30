#include "Director.h"
#include "Builder.h"
void Director::setBuilder(Builder* b)
{
	builder = b;
}

Product* Director::construct()
{
	builder->buildPartA();
	builder->buildPartB();
	builder->buildPartC();
	return builder->getResult();
}
