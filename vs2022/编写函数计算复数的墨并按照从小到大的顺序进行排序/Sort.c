#include<stdio.h>
#include<math.h>
struct comp
{
	float x, y;
	float m;
};
void sort(struct comp *p, int n)
{
	int i, j, k;
	struct comp t;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if ((p + k)->m > (p + j)->m)
				k = j;
		}
			  t = *(p + i);
			  *(p + i) = *(p + k);
			  *(p + k) = t;
	}
}