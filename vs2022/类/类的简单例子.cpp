#include<iostream>
using namespace std;

class Student
{


public:
	//类中的属性和行为我们统一称为成员
	//属性   成员属性 成员变量
	//行为   成员函数 成员方法
	int m_Id;
	string m_Name;

	void ShowStu()
	{
		cout << "学生学号：" << m_Id
			<< " 学生姓名：" << m_Name << endl;
	}
	void setName(string name)
	{
		m_Name = name;
	}

	void setId(int id)
	{
		m_Id = id;

	}
};

int main2()
{
	 Student stu1;
	 //stu1.m_Name = "张三";
	 stu1.setName("张三");
	 stu1.m_Id = 1;

	 stu1.ShowStu();

	 Student stu2;
	 stu2.m_Name = "李四";
	 //stu2.m_Id = 2;
	 stu2.setId(2);
	 stu2.ShowStu();
	 
	 system("pause");
	 return 0;
}