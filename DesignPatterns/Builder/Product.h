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
	friend class ConcreteBuilder;//���ɣ���build�ж��ʵ��ʱ��friend class�ȽϷ��������ǰ��ⲿ�ֺ����ŵ�public���ֻ��ƻ���װ
public:
	void show();
};

