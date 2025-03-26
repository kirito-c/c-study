//#include<iostream>
//using namespace std;
//
//
////重载递增运算符
//
//
////自定义整型
//class MyInteger
//{
//
//	friend ostream& operator<<(ostream& out, MyInteger myint);
//
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	//重载前置++运算符 返回引用是为了一直对一个数据进行递增操作
//	MyInteger & operator++()
//	{
//		//先进行++运算
//		m_Num++;
//
//		//在将自身做返回
//		
//		return *this;
//	}
//
//	//重载后置++运算符
//	MyInteger operator++(int)//int代表一个占位参数，可以用于区分前置和后置递增
//	{
//		//先 记录当时结果
//		MyInteger temp = *this;
//		//后递增
//		m_Num++;
//		//最后将记录结果返回
//		return temp;
//	}
//private:
//	int m_Num;
//};
//
////重载<<运算符
//ostream & operator<<(ostream& out, MyInteger myint)
//{
//	out << "m_Num = " << myint.m_Num << endl;
//	return out;
//}
//void test01()
//{
//	MyInteger myint;
//
//	cout << ++(++myint) << endl;
//	cout << myint << endl;
//}
//void test02()
//{
//	MyInteger myint;
//
//	cout << myint++ << endl;
//	cout << myint << endl;
//
//}
//int main()
//{
//	//test01();
//
//	test02();
//	/*int a = 0;
//
//	cout << ++(++a) << endl;
//	cout << a << endl;*/
//	system("pause");
//	return 0;
//}