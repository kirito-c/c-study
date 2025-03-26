#include<iostream>
#include"bubblesort.h"
#define N 5
using namespace std;
int main()
{
	int arr[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	bubblesort(arr, N);
	for (int i = 0; i < N; i++)
	{
		cout << arr[i]<<" ";
	}


	system("pause");
	return 0;
}