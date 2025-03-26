#include<iostream>
using namespace std;
int main1()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; 
	cout << "整个数组占用的内存空间为" << sizeof(arr) << endl;
	cout << "每个元素占用的内存空间为" << sizeof(arr[0]) << endl;
	cout << "这个数组有" << sizeof(arr) / sizeof(arr[0]) << "个" << endl;


	cout << "首地址为" << (int)arr << endl;
	cout << "数组第一个的地址是" << &arr[0] << endl;
	system("pause");
	return 0;
}