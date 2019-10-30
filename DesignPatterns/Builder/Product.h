#pragma once

#include<string>

class Product
{
private:
	std::string a;
	std::string b;
	std::string c;
protected:
	void setA(std::string str);
	void setB(std::string str);
	void setC(std::string str);
	friend class ConcreteBuilder;//存疑，当build有多个实现时用friend class比较繁琐，但是把这部分函数放到public下又会破坏封装
public:
	void show();
};

