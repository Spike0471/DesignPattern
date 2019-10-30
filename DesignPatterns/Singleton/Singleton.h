#pragma once
#include<mutex>

class Singleton
{
private:
	static Singleton* m_instance;
	static std::mutex mut;
	Singleton();
public:
	static Singleton& GetInstance();
	void show();
	~Singleton();
};

