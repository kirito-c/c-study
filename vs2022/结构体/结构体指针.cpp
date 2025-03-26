#include<iostream>
using namespace std;
struct student
{
	string name;
	int age;
	int score;
};
int main2()
{
	struct student s = { "张三",18,90 };
	struct student* p = &s;
	cout << " 姓名：" << p->name
		 << " 年龄：" << p->age
		 << " 成绩：" << p->score << endl;
	return 0;
}