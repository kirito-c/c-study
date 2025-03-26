#include<iostream>
using namespace std;

int* func1()
{
	//利用new关键字，可以将数据开辟到对其
	//指针指针本质也是局部变量，放在栈上，指针保存的数据是放在堆上
	int* p = new int(10);//new是拿出这个数的地址
	return p;
}

int main1()
{
	int* p = func1();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}