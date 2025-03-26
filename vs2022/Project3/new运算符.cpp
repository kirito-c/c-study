#include<iostream>
using namespace std;

int* func()
{
	int* p = new int(10);
	return p;
}


void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//堆区的数据由程序员开辟管理
	//想释放堆区的数据，利用关键字delete
	delete p;
	//cout << *p << endl;//数据内存已经释放，再次访问就是违法，报错

}
//在堆区开辟数组
void test02()
{
	//创建10整形数据的数组在堆区
	int *arr = new int[10];//返回首地址
	for(int i = 0;i<10;i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//释放数组,这个时候要加[]
	delete[]arr;
}

int main()
{
	//test01();
	test02();


	system("pause");
	return 0;
}