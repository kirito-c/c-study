#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	float a = 0, b = 0;
	if(scanf("%f%f",&a,&b) ==2);
	{
       void swap1(float *x, float *y);
	   swap1(&a, &b);
	   printf("%f%f", a, b);
	   return 0;
	}
	
}
void swap1(float *x, float *y)
{
	float t;
	t = *x;
	*x = *y;
	*y = t;
}
	
