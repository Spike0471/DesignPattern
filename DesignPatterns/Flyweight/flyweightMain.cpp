#include "FlyweightFactory.h"
#include "Flyweight.h"
int main()
{
	FlyweightFactory::GetInstance().getFlyweight("rua1")->operation();
	FlyweightFactory::GetInstance().getFlyweight("rua2")->operation();
	FlyweightFactory::GetInstance().getFlyweight("rua1")->operation();
	FlyweightFactory::GetInstance().getFlyweight("rua2")->operation();
	return 0;
}