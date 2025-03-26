#include<stdio.h>
#define N 5
int main()
{
	int a[N], i, temp, j;
	for (i = 0; i < N; i++)
		scanf_s("%d", &a[i]);
	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < N - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < N; i++)
		printf("%d  ", a[i]);
	return 0;
	

}