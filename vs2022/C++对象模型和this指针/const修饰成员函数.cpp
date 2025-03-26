#include<iostream>
using namespace std;

//1.常函数：
//成员函数后加const我们称这个函数为常函数
//常函数内不可以修改成员属性
//成员属性声明时加关键字mutable后在常函数中依然可以修改

//2.常对象：
//声明对象前加const称该对象为常对象
//常对象只能调用常函数
class Person
{
public:

	
	//this 指针的本质是指针常量 指针的指向是不可以修改的
	//const Person* const this指向和指向的值不可以更改
	//在成员函数后面加const 修饰的是this的指向 让指向的值也不可以修改
	void ShowPerson()const
	{
		this->m_B = 100;
		//this->m_A = 100;
		//this = NULL;//this指针是不可以修改指针的指向的
	}
	void func()
	{
		m_A = 100;
	}

	int m_A;
	mutable int m_B;//特殊变量，即使在常函数中也可以修改这个值
};

void test01()
{
	Person p;
	p.ShowPerson();
	
}

void test02()
{
	const Person p;//在对象前加const 变为常对象 常对象只能调用常函数
	//p.m_A = 100;
	p.m_B = 100;//m_B是特殊值，即使在常对象下也可以修改
	p.ShowPerson();
	//p.func();//常对象不可以调用普通成员函数，因为普通成员函数可以修改属性


}
int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}