#include<iostream>
using namespace std;
int main2()
{
	int arr[5] = { 1,3,2,5,4 };
	
	cout << "原数组为" << endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}
	int start = 0, end = sizeof(arr) / sizeof(arr[0])-1;
	do
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	} while (start < end);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");
	return 0;
}