#include<stdio.h>
struct comp
{
	float x, y;
	float m;
};

float compare(struct comp a, struct comp b)
{
	a.m = sqrt(a.x * a.x + a.y * a.y);
	b.m = sqrt(b.x * b.x + b.y * b.y);
	return (a.m - b.m);
}
