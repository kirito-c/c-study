#include<iostream>
using namespace std;

//class Person
//{
//public:
//	//1构造函数
//	//没有返回值 不用写void
//	//构造函数可以有参数，可以发生重载
//	//构建对象的时候，构造函数会自动调用，而且只调用一次
//	Person()
//	{
//		cout << "Person无参构造函数的调用" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person有参构造函数的调用" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person& p)
//	{
//		//将传入的人身上的所有属性拷贝到我的身上
//		age = p.age;
//		cout << "Person拷贝构造函数的调用" << endl;
//	}
//	//析构函数 进行清理的操作
//    //没有返回值 不写void
//	//函数名和类名相同 在名称前面加~
//	//不可以有参数的
//	//对象在销毁前会自动调用析构函数
//	~Person()
//	{
//		cout << "Person析构函数的调用" << endl;
//	}
//	int age;
//};
//
////调用
//void test01()
//{
//	//1.括号法
//	//Person p;//默认构造函数的调用
//	//Person p2(10); //有参构造函数调用
//	//Person p3(p2);//拷贝构造函数调用
//
//	//注意事项
//	// 调用默认构造函数的时候，不要加()
//	//因为下面这行代码，编译器会认为是一个函数的声明,不会认为在创建对象
//	//Person p1();
//
//	//cout << "p2的年龄：" << p2.age << endl;
//	//cout << "p3的年龄：" << p3.age << endl;
//
//	//2.显示法
//	//Person p1;
//	//Person p2 = Person(10);//有参构造调用
//	//Person p3 = Person(p2);//拷贝构造函数
//
//	//Person(10);//匿名对象 特点是当前行执行结束后，系统自动回收匿名对象
//
//	//注意事项2
//	// 不要利用拷贝构造函数初始化一个匿名的对象
//	//Person(p3);
//	//3.隐式转换法
//	Person p4 = 10;//相当于写了 Person p4 = Person(10)(有参构造）
//	Person p5 = p4;//拷贝构造
//}
//
//int main1()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}