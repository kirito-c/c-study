#include<iostream>
using namespace std;
//交换函数

//值传递
void myswap01(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 a = " << a << endl;
	cout << "swap01 b = " << b << endl;

}

//地址传递
void myswap02(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


//引用传递
void myswap03(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main3()
{
	int a = 10;
	int b = 20;
	
	//myswap01(a, b);
	//myswap02(&a, &b);
	myswap03(a, b);//引用传递可以做到形参修饰实参
    cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}