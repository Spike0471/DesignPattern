#include "FlyweightFactory.h"
#include "ConcreteFlyweight.h"
#include <iostream>
using namespace std;

FlyweightFactory FlyweightFactory::m_instance;

FlyweightFactory::FlyweightFactory() {}

FlyweightFactory& FlyweightFactory::GetInstance()
{
	return m_instance;
}

Flyweight* FlyweightFactory::getFlyweight(std::string str)
{
	auto itr = m_flyweightMap.find(str);
	if (itr == m_flyweightMap.end()) 
	{
		Flyweight* tmp = new ConcreteFlyweight(str);
		m_flyweightMap.insert(make_pair(str,tmp));
		return tmp;
	}
	else 
	{
		cout << "Already exist." << endl;
		return itr->second;
	}
}
