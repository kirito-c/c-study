#include "Cal.h"
char* context1 = NULL;

//计算器初始化
void InitCalculator(Calculator* cal)
{
	cal->mode = Simple_Mode;
	cal->num1 = 0;
	cal->num2 = 0;
	cal->operator1 = '\0';
	strcpy_s(cal->InputBuffer, " ");//清空缓存区
}


//将编码器的值转换成字符串
//char * getEncoderInput()
//{
//	static char buffer[32];
//	//double value = Encoder_get();//传入一个数
//	//sprintf(buffer,"%.2f",value);
//	//return buffer;
//}


//运算函数
double performOperation(Calculator* cal)
{
	switch (cal->operator1)
	{
	case '+':return cal->num1 + cal->num2;
	case '-':return cal->num1 - cal->num2;
	case '*':return cal->num1 * cal->num2;
	case '/':
		if (cal->num2 != 0)
		{
			return cal->num1 / cal->num2;
		}
		else
		{
			//报错(0不能做除数)
			cout << "0不能做除数" << endl;
			exit(1);
		}
	default:return 0;
	}

}

//处理用户输入的函数(一个一个输入)
void ProcessSingleInput(Calculator* cal, const char* input)
{
	strcpy_s(cal->InputBuffer, "");
	strcat_s(cal->InputBuffer, input);
	char* token = strtok_s(cal->InputBuffer, " ",&context1);
	if (token == NULL)
	{
		return;
	}
	double num;

	if (isdigit(token[0]) || token[0] == '.')
	{
		num = atof(token);
		if (cal->operator1 == '\0')
		{
			cal->num1 = num;
			cout << "您输入的Number 1: " << cal->num1 << endl; // 调试信息
		}
		else
		{
			cal->num2 = num;
			cout << "您输入的Number 2: " << cal->num2 << endl; // 调试信息
		}
	}
	else if (strlen(token) == 1 && (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/'))
	{
		cal->operator1 = token[0];
		cout << "Operator: " << cal->operator1 << endl; // 调试信息
	}
	else if (token[0] == '=')
	{
		cal->num1 = performOperation(cal);
		cal->operator1 = '\0';

		//判断一下输出的结果是整型还是浮点型
		if (fabs(cal->num1 - (int)cal->num1) < 0.0001)
		{
			cout <<"结果为" << cal->num1 << endl << flush;
		}
		else
		{
			cout << "结果为" << cal->num1 << endl << flush;
		}

		//清空缓存区
		strcpy_s(cal->InputBuffer, "");             // 清空缓冲区
	}
}

//支持连续输入
void ProcessContinueInput(Calculator* cal, const char* expression)
{
	strcpy_s(cal->InputBuffer, expression);
	char* token = strtok_s(cal->InputBuffer, " ",&context1);
	double num;

	while (token != NULL)
	{
		//识别整型和浮点型
		if (isdigit(token[0]) || token[0] == '.')
		{
			num = atof(token);
			cal->num2 = num;
		}
		else if (strlen(token) == 1 && (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/'))
		{
			cal->operator1 = token[0];
		}
		else if (token[0] == '=')
		{
			cal->num1 = performOperation(cal);
			cal->operator1 = '\0';
			//判断一下输出的结果是整型还是浮点型
			if (fabs(cal->num1 - (int)cal->num1) < 0.0001)
			{
				cout << cal->num1 << endl << flush;
			}
			else
			{
				cout << cal->num1 << endl << flush;
			}
			strcpy_s(cal->InputBuffer, " ");
		}
	}




}

//设置计算器类型
void setMode(Calculator* calc, CalculatorMode mode)
{
	calc->mode = mode;
}

//输入一个二次三项式
double f(double x, const char* InputBuffer)
{
	double a, b, c;
	sscanf_s(InputBuffer, "%lf*x^2+%lf*x+%lf", &a, &b, &c);
	return a * x * x + b * x + c;
}

//黎曼和求定积分
double riemannSumIntegral(double a, double b, int n, const char* InputBuffer)
{
	double h = (b - a) / n;
	double sum = 0;
	for (int i = 0; i <= n; i++)
	{
		double x = a + i * h;
		sum += f(x, InputBuffer);

	}
	return h * sum;
}

