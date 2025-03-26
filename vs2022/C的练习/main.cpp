#include<iostream>
using namespace std;
#include "Cal.h"


int main()
{
	Calculator calc;
	InitCalculator(&calc);

	//¼Ó·¨
	ProcessSingleInput(&calc, "5");
	ProcessSingleInput(&calc, "+");
	ProcessSingleInput(&calc, "3");
	ProcessSingleInput(&calc, "=");
	cout << endl;                                                        
	ProcessSingleInput(&calc, "5");
	ProcessSingleInput(&calc, "*");
	ProcessSingleInput(&calc, "3");
	ProcessSingleInput(&calc, "=");

	system("pause");
	return 0;
}