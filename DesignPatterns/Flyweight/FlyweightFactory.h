#pragma once
#include<map>
#include<string>

class Flyweight;
class FlyweightFactory
{
private:
	std::map<std::string, Flyweight*> m_flyweightMap;
	FlyweightFactory();
	static FlyweightFactory m_instance;
public:
	static FlyweightFactory& GetInstance();
	Flyweight* getFlyweight(std::string str);
};

