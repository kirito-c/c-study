//#include<iostream>
//using namespace std;
//
////继承中的构造和析构顺序
////先进后出现有父类 再有子类 先进后出
//
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base的构造函数" << endl;
//	}
//	~Base()
//	{
//		cout << "Base的析构函数" << endl;
//	}
//private:
//
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son的构造函数" << endl;
//	}
//	~Son()
//	{
//		cout << "Son的析构函数" << endl;
//	}
//private:
//};
//
//
//void test01()
//{
//	//Base b;
//
//	//继承中的构造和析构顺序如下
//	//先构造父类，在构造子类，析构的顺序与构造的顺序相反
//	//先进后出
//	Son s;
//}
//int main()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}