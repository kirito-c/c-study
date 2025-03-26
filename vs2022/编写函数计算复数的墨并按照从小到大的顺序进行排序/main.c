#include<stdio.h>
#define N 5
#include"Sort.h"
#include<math.h>
int main()
{
	struct comp a[N];
	int i;
	printf("Input complex:\n");
	for (i = 0; i < N; i++)
	{
		scanf_s("%f%f", &a[i].x, &a[i].y);
		a[i].m = sqrt(a[i].x * a[i].x + a[i].y * a[i].y);
	}
	sort(a, N);
	printf("Output complex\n");
	for (i = 0; i < N; i++)
	{
		printf("%.1f+%.1fi  ",a[i].x, a[i].y);
	}
	   return 0;
}