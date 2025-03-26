//#include<iostream>
//using namespace std;
//
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//
//public:
//	//重载前置--运算符
//	MyInteger& operator--()
//	{
//		m_a--;
//		return *this;
//	}
//
//	//重载后置--运算符
//	MyInteger operator--(int)
//	{
//		MyInteger temp;
//		temp = *this;
//		m_a--;
//		return temp;
//	}
//private:
//	int m_a = 0;
//	
//};
//
//ostream& operator<<(ostream &cout,MyInteger myint)
//{
//	cout << myint.m_a << endl;
//
//	return cout;
//}
//void test01()
//{
//	MyInteger myint;
//	cout <<"前置的结果"<< --myint << endl;
//	cout <<"前置的结果"<< myint << endl;
//}
//void test02()
//{
//	MyInteger myint;
//	cout <<"后置的结果"<< myint-- << endl;
//	cout <<"后置的结果"<< myint << endl;
//}
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}