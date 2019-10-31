#include "Proxy.h"
#include "RealSubject.h"
#include <iostream>
using namespace std;

void Proxy::preRequest()
{
	cout << "Proxy::preRequest" << endl;
}

void Proxy::afterRequest()
{
	cout << "Proxy::afterRequest" << endl;
}

Proxy::Proxy()
{
	m_sub = new RealSubject();
}

Proxy::~Proxy()
{
	delete m_sub;
}

void Proxy::request()
{
	preRequest();
	m_sub->request();
	afterRequest();
}
