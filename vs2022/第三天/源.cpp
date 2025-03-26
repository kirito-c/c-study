#include<iostream>
using namespace std;
int main()
{
	int a = 10, b = 20, c = 30;
	//在c++中三目运算符返回的是变量可以继续赋值
	(a < b ? a : b) = 100;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;



	system("pause");


	return 0;
}