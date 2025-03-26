//#include<iostream>
//using namespace std;
//
////空指针调用成员函数
//
//class Person
//{
//public:
//	void ShowClassName()
//	{
//		cout << "this is a Person class" << endl;
//	}
//
//	void ShowPersonAge()
//	{
//		if (this == NULL)
//		{
//			return;
//		}
//		//报错原因是传入的指针是为NULL
//		cout << "aeg = " << this->m_Age << endl;
//	}
//
//	int m_Age;
//};
//
//
//void test01()
//{
//	Person* p = NULL;
//
//	p->ShowClassName();
//
//	p->ShowPersonAge();
//}
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}