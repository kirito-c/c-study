#include<iostream>
using namespace std;
struct student
{
	string name;
	int age;
	int score;
};
//值传递
void PrintStudent1(struct student s)
{
	s.age = 100;
	cout << "子函数中 姓名：" << s.name << " 年龄：" << s.age << " 成绩：" << s.score <<"\t" << endl;

}

//地址传递
void PrintStudent2(struct student* s)
{
	s->age = 200;
	cout << "子函数中 姓名：" << s->name << " 年龄：" << s->age << " 成绩：" << s->score <<"\t" << endl;

}
int main4()
{
	struct student s;
	s.name = "张三";
	s.age = 18;
	s.score = 90;
	cout << "值传递结果：" << endl;
	PrintStudent1(s);
	cout << "地址传递结果：" << endl;
	PrintStudent2(&s);
	cout << "主函数中 姓名：" << s.name << " 年龄：" << s.age << " 成绩：" << s.score <<"\t" << endl;

	system("pause");
	return 0;
}