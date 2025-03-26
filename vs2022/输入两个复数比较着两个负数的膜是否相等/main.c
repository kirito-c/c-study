#include<stdio.h>
#include<math.h>
#include"Compare.h"
int main()
{
	struct comp a, b;
	scanf_s("%f%f", &a.x, &a.y);
	scanf_s("%f%f", &b.x, &b.y);
	if (fabs(compare(a, b)) <= 1.0e-5)
		printf("Equal");
	else
		printf("Unequal");
	return 0;
}