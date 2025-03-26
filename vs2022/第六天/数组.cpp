#include<iostream>
using namespace std;
int main2()
{
	int array[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	cout << "数组所占内存空间为：" << sizeof(array) << endl;
	cout << "数组第一行所占用的空间为：" << sizeof(array[0]) << endl;
	cout << "数组第一个元素占用的内存为：" << sizeof(array[0][0]) << endl;
	cout << "数组一共有" << sizeof(array) / sizeof(array[0]) << "行" << endl;
	cout << "数组的列数为：" << sizeof(array[0]) / sizeof(array[0][0]) << endl;


	system("pause");
	return 0;
}