#include<iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
	int i = 0;
	for (i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}



}