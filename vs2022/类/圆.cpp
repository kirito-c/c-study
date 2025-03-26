#include<iostream>
using namespace std;

const double PI = 3.14;

class Circle
{
	//访问权限
	//公共权限
public:

	//属性
	int m_r;
	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}



};
int main1()
{
	//通过圆类创建一个具体的圆（实例化)
	Circle c1;
	//给圆的对象的属性进行赋值
	c1.m_r = 10;
	cout << "圆的周长为：" << c1.calculateZC() << endl;



	system("pause");
	return 0;
}