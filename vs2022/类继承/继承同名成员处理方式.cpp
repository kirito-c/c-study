//#include<iostream>
//using namespace std;
//
////子类同名成员覆盖父类同名成员 需要额外加作用域来访问
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base - func()的调用" << endl;
//	}
//
//	void func(int A)
//	{
//		cout << "Base - func(int A)的调用" << endl;
//	}
//
//	int m_A;
//
//};
//
//class Son :public Base
//{
//public:
//
//	Son()
//	{
//		m_A = 200;
//	}
//
//	void func()
//	{
//		cout << "Son - func()的调用" << endl;
//	}
//	int m_A;
//};
//
////同名的成员属性的处理方式
//void test01()
//{
//	Son s;
//	cout << "Son 下的m_A = " << s.Son::m_A << endl;
//	//如果通过子类对象 访问父类中同名成员 需要加作用域
//	cout << "Base 下的m_A = " << s.Base::m_A << endl;
//}
//
////同名的成员函数的处理方式
//void test02()
//{
//	Son s;
//
//	s.func();
//	s.Base::func();
//
//	//如果子类中出现和父类同名的成员函数，子类的同名成员绘隐藏掉父类中所有的同名成员函数
//	//如果想访问到父类中被隐藏的同名成员函数，需要加作用域
//	s.Base::func(100);
//
//}
//int main()
//{
//	//test01();
//	test02();
//
//
//	system("pause");
//	return 0;
//}