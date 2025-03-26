#include<stdio.h>
#include<math.h>
#define N 3
int main()
{
	struct complex
	{
		float x;
		float y;
		float m;
	}a[N],temp;
	int i, j, k;
	for (i = 0; i < N; i++)
	{
		scanf_s("%f%f", &a[i].x, &a[i].y);
		a[i].m = sqrt(a[i].x * a[i].x + a[i].y * a[i].y);
	}
	for (i = 0; i < N - 1; i++)
		k = i;
	for (j = i + 1; j < N; j++)
	{
		if (a[k].m < a[j].m)
			k = j;
		temp = a[i];
		a[i] = a[k];
		a[k] = temp;
	}
	for (i = 0; i < N; i++)
		printf("%2f+%2fi\n", a[i].x, a[i].y);
	return 0;
}