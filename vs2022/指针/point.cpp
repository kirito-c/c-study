#include<iostream>
using namespace std;
int main1()
{
	int a = 10;
	int* p = &a;
	cout << "sizeof (int*) is " << sizeof(int *) << endl;
	cout << "sizeof (float*) is " << sizeof(float*) << endl;
	cout << "sizeof (double*) is " << sizeof(double*) << endl;
	cout << "sizeof (char*) is " << sizeof(char*) << endl;



	system("pause");
	return 0;
}