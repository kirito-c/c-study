#include<iostream>
using namespace std;

//动物类
class Animal
{
public:
	int m_Age;
};

//利用虚继承 解决零星继承的问题
//在继承之前加上关键字virtual 变为虚继承(相当于是提供了一个指针指向m_Age而不创建新的变量
// animal称为虚基类
//羊类
class Sheep : virtual public Animal
{

};

//驼类
class Tuo : virtual public Animal
{

};

//羊驼类
class SheepTuo :public Sheep,public Tuo
{

};


void test01()
{
	SheepTuo st;

	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;//共享的相当于

	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age = "<<st.m_Age << endl;
	//这份数据只要有一份就行，菱形继承导致有两份，浪费资源
}
int main()
{

	test01();

	system("pause");
	return 0;
}