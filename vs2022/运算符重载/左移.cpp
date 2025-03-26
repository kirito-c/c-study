//#include<iostream>
//using namespace std;
//
////左移运算符重载
//
//class Person
//{
//	friend ostream& operator<<(ostream& out, Person& p);
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//
//private:
//
//	//利用成员函数重载 左移运算符 p.operator<<(cout)
//	// 通常不会利用成员函数重载<<运算符无法实现cout在左侧
////	void operator<<(cout)
////	{
////
////	}
//	int m_A;
//	int m_B;
//};
//
////只能利用全局函数重载左移运算符（链式编程思想）
//ostream & operator<<(ostream &out,Person &p)//本质 operator<<(cout,p) 简化为cout << p
//{
//	out << "m_A = " << p.m_A << " m_B = " << p.m_B << endl;
//	return out;//返回的是一个对象所以可以接着使用，而且要注意用引用接收，不然就是不同的对象了
//}
//
//void test01()
//{
//	Person p(10,10);
//	
//
//	cout << p <<"hello world" << endl;
//	
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}