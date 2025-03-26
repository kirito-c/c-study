#include<iostream>
using namespace std;
//常量引用 用来修饰形参，防止误操作

//打印数据(只读不写)
void showvalue(const int& val)
{
	//val = 1000;
	cout << "val = " << val << endl;

}


int main()
{
	//加上const以后，编译器将代码修改 int temp = 10;const int &ref = temp
	const int& ref = 10;
	//ref = 100//加入const以后是只读，不可以修改

	int a = 100;
	showvalue(a);

	cout << "a = " << a << endl;
}
