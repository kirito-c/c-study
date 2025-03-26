#include<iostream>
using namespace std;

int main2()//引用就是给变量起别名 数据类型 &别名 = 原名
{
	int a = 10;
	int& b = a;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	system("pause");
	return 0;
	//引用必须初始化
	// int &b(错误)
	//引用一旦初始化，就不可以更改
}