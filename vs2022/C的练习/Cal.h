#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

//#include <iostream>
typedef enum
{
	Simple_Mode,//普通计算器
	Science_Mode//科学计算器

}CalculatorMode;

//定义一个计算器的结构体
typedef struct
{
	CalculatorMode mode;
	double num1, num2;
	char operator1;//用于接收运算符
	char InputBuffer[100];//缓存区
}Calculator;



//计算器初始化
void InitCalculator(Calculator* cal);
double performOperation(Calculator* cal);
//处理用户输入的函数
void ProcessSingleInput(Calculator* cal, const char* input);
void ProcessContinueInput(Calculator* cal, const char* expression);
void setMode(Calculator* calc, CalculatorMode mode);
double f(double x, const char* InputBuffer);
double riemannSumIntegral(double a, double b, int n, const char* InputBuffer);
//char * getEncoderInput();
