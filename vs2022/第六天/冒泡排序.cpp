#include<iostream>
using namespace std;
int main1()
{
	int i = 0,array[10];
	for (i = 0; i < 10; i++)
	{
		cin >> array[i];
	}
	int temp = 0,j = 0;
	for (i = 0; i < 9; i++)
	{
        for (j = 0; j < 9-i; j++)
	    {
		     if (array[j] >array[j+1])
		     {
			    temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
		     }
	    }
	}
	
	for (i = 0; i < 10; i++)
	{
		cout << array[i]<<"  ";
	}

	system("pause");
	return 0;
}