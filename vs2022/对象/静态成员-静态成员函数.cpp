#include<iostream>
using namespace std;

//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量

class Person
{

public:
	//静态成员函数
	static void func()
	{
		m_A = 100;//静态成员函数可以访问静态成员变量
		//m_B = 200;//静态成员函数不可以访问非静态成员变量
		//无法区分是哪个对象的m_B属性
		cout << "static void func的调用" << endl;
	}

	static int m_A;
	int m_B;
	//静态成员函数也是有访问权限的
private:
	static void func2()
	{
		cout << "	static void func2的调用" << endl;
	}
	
};


 int Person::m_A = 0;

//两种访问方式
void test01()
{
	//通过对象进行访问
	Person p;
	p.func();

	//通过类名进行访问
	Person::func();

	//Person::func2();//类外访问不到私有静态成员函数
}
int main()
{
	test01();


	system("pause");
	return 0;
}