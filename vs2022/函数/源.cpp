#include<iostream>
using namespace std;
int main()
{
	int add(int, int);
	int a = 4, b = 1,sum = 0;
	sum = add(a, b);
	cout << sum << endl;


	system("pause");
	return 0;
}
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}