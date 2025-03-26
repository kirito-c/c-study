#include<iostream>
using namespace std;

//继承的好处在于减少重复代码
//语法：class 子类 : 继承方式 父类
//子类：派生类
//父类：基类
class Java
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册（公共头部）" << endl;
	}

	void footer()
	{
		cout << "帮助中心、交流合作、站内地图（公共底部）" << endl;
	}

	void left()
	{
		cout<<"Java、python"
	}
};
int main()
{


	system("pause");
	return 0;
}