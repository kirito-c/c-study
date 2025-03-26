#include<iostream>
using namespace std;

//如果我们自己传入数据，就用自己的数据，如果没有就用默认值
int func(int a, int b = 20,int c = 30)
{
	return a + b + c;
}
int func2(int a, int b, int c, int d)
{
	return a + b + c + d;
}
//注意事项：
//1.如果某个位置已经有了默认参数，那么从这个位置往后从左到右都必须有默认值,
// 2022虽然不报错，但是实际上在调用的时候如果按照错的来，就相当于没有意义
//2、声明和实现只能有一个默认参数
int func2(int a, int b);//函数声明
int func2(int a = 10, int b = 10)
{
	return a + b;
}

int main0()
{
	//cout << func(10,30) << endl;
	//cout << func2(10,30,40,20) << endl;
	cout << func2(10, 10) << endl;

	system("pause");
	return 0;
}
