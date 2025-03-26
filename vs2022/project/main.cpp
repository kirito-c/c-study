#include<iostream>
using namespace std;

class Number
{

public:

	Number operator + (Number &p)
	{
		Number temp;
		temp.m_a = this->m_a + p.m_a;
		temp.m_b = this->m_b + p.m_b;
		return temp;
	}

	Number operator - (Number& p)
	{
		Number temp;
		temp.m_a = this->m_a - p.m_a;
		temp.m_b = this->m_b - p.m_b;
		return temp;
	}

	Number operator * (Number& p)
	{
		Number temp;
		temp.m_a = this->m_a * p.m_a;
		temp.m_b = this->m_b * p.m_b;
		return temp;
	}

	Number operator / (Number& p)
	{
		Number temp;
		temp.m_a = this->m_a / p.m_a;
		temp.m_b = this->m_b / p.m_b;
		return temp;
	}

	void Print()
	{
		cout << m_a << endl;
		cout << m_b << endl;
	}

	int m_a;
	int m_b;

};

class Mydivi : public Number
{
public:
	Mydivi operator/(Mydivi& m)
	{
		Mydivi temp;
		temp.m_a = this->m_a / m.m_a;
		temp.m_b = this->m_b / m.m_b;
		return temp;
	}
};

class Mydou : public Number
{

public:
	Mydou operator /(Mydou& M)
	{
		Mydou temp;
		temp.m_a = this->m_a / M.m_a;
		temp.m_b = this->m_b / M.m_b;
		return temp;
	}
};

void test()
{
	
	Mydivi a;
	a.m_a = 10;
	a.m_b = 20;
	Mydivi b;
	b.m_a = 30;
	b.m_b = 40;
	Mydivi c = a / b;
	cout << "c.m_a = " << c.m_a << endl;
	cout << "c.m_b = " << c.m_b << endl;

}

int main()
{
	test();
	system("pause");
	return 0;
}