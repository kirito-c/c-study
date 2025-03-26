#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//容器中存放自定义数据类型
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;

	}

private:
	string m_Name;
	int m_Age;


};