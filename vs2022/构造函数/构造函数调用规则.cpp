//#include<iostream>
//using namespace std;
//
////默认情况下，C++编译器至少给一个类添加3个函数
////1.默认构造函数
////2.默认析构函数
////3.默认拷贝构造函数（对属性进行值拷贝）
////如果用户定义有参 C++就不提供无参构造 但提供默认拷贝构造
////如果定义拷贝，就不提供任何的构造了
//
//class Person
//{
//public:
//
//	Person()
//	{
//		cout << "Person的默认构造函数调用" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "Person的有参构造函数的调用" << endl;
//
//		m_Age = age;
//	}
//	//Person(const Person& p)
//	//{
//	//	cout << "Person的拷贝构造函数的调用" << endl;
//	//	m_Age = p.m_Age;
//	//}
//	~Person()
//	{
//		cout << "Person的析构函数的调用" << endl;
//	}
//
//	int m_Age;
//
//};
//
//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//
//	cout << "p2的年龄为：" <<p2.m_Age<< endl;
//}
//
//int main()
//{
//	test01();
//
//
//
//
//	system("pause");
//	return 0;
//}