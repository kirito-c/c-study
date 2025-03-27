#include<iostream>
#include<math.h>
#define M_PI 3.14
using namespace std;

double sin_deg(double x)
{
	return sin(x * M_PI / 180.0);
}

double cos_deg(double x)
{
	return cos(x * M_PI / 180.0);
}

double tan_deg(double x)
{
	return tan(x * M_PI / 180.0);
}

int main()
{
	double angle = 45.0;

	cout << sin_deg(angle) << endl;
	cout << cos_deg(angle) << endl;
	cout << tan_deg(angle) << endl;

	system("pause");
	return 0;
}