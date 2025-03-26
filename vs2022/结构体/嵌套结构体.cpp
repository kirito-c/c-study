#include<iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;
};

int main3()
{
	struct teacher t = { 1000,"老王",30,{"小王",18,90} };
	cout << "老师id:" << t.id 
	     << " 老师姓名:" << t.name 
	     << " 老师年龄:" << t.age 
	     << " 学生姓名:" << t.stu.name
		 << " 学生年龄:" << t.stu.age
		 << " 学生成绩:" << t.stu.score << endl;
	 
	system("pause");
	return 0;

}