#include<iostream>
using namespace std;

//占位参数（还可以有默认参数）
//目前阶段还用不到 后面用
void func(int a,int)
{
	cout << "this is a function" << endl;
}

int main1()
{

	func(10,10);

	system("pause");
	return 0;
}