#include <stdio.h>
int main()
{
	float a, b;
	scanf_s("%f%f", &a, &b);
    void swap1(float *x, float *y);
	swap1(&a, &b);
	printf("%f%f", a, b);
	return 0;
	
}
void swap1(float* x, float* y)
{
	float t;
	t = *x;
	*x = *y;
	*y = t;
}