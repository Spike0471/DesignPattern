#pragma once
#include "Subject.h"

class Proxy
{
private:
	Subject* m_sub;
	void preRequest();
	void afterRequest();
public:
	Proxy();
	~Proxy();
	void request();
};

