#include<iostream>
using namespace std;
struct student
{
	string name;
	int age;
	int score;
};

//这是一个读操作的函数
void PrintStudent2(const struct student* s)
{
	//s->age = 200;//这是写操作的东西加上const就可以防止误操作
	cout << "子函数中 姓名：" << s->name << " 年龄：" << s->age << " 成绩：" << s->score << "\t" << endl;

}

int main()
{
	struct student s;
	s.name = "张三";
	s.age = 18;
	s.score = 90;
	cout << "地址传递结果：" << endl;
	PrintStudent2(&s);
	cout << "主函数中 姓名：" << s.name << " 年龄：" << s.age << " 成绩：" << s.score << "\t" << endl;

	system("pause");
	return 0;
}