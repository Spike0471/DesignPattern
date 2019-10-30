#include "Singleton.h"
#include<iostream>
#include<mutex>
using namespace std;

Singleton* Singleton::m_instance = nullptr;
mutex Singleton::mut;

Singleton& Singleton::GetInstance()
{
	lock_guard<mutex> lg(mut);	//保证线程安全
	if (m_instance == nullptr)
		m_instance = new Singleton();
	return *m_instance;
}

Singleton::Singleton() {}

void Singleton::show()
{
	cout << "This is a singleton class." << endl;
}

Singleton::~Singleton()
{
	delete m_instance;
}
