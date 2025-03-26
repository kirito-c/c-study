#include<stdio.h>
#define N 5
int main()
{
	int i, j, a[N], k, t;
	for (i = 0; i < N; i++)
		scanf_s("%d", &a[i]);
	for (i = 0; i < N - 1; i++)
	{
		k = i;
		for (j = i + 1; j < N; j++)
			if (a[k] > a[j])
				k = j;
			t = a[k];
			a[k] = a[i];
			a[i] = t;
	}
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
		

}