#include<iostream>
using namespace std;

//三种访问权限
//公共权限 public        成员类内可以访问 类外也可以访问
//保护权限 protected     成员类内可以访问 类外不可以访问 儿子也可以访问父亲中的保护内容
//私有权限 private       成员类内可以访问 类外不可以访问 儿子不可以访问父亲中的内容

class Person
{

public:
	string m_Name;//姓名


protected:
	string m_Car;//汽车

private:
	int m_Password;//银行卡密码

public:
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}

};



int main3()
{
	//实例化一个具体对象
	Person p1;

	p1.m_Name = "李四";
	//p1.m_Car = "奔驰";


	system("pause");
	return 0;
}