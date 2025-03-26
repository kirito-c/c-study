#include<iostream>
using namespace std;

struct Student //这相当于int
{
	string name;
	int age;
	int score;
};
int main1()
{
     Student stuarray[3] =
	{
		{"张三",18,90},
		{"李四",28,70},
		{"王五",38,60}
	};

	stuarray[2].age = 80;

	for (int i = 0; i < 3; i++)
	{
		cout<< "姓名：" << stuarray[i].name 
			<< " 年龄：" << stuarray[i].age 
			<< " 成绩：" << stuarray[i].score << endl;

	}

	system("pause");
	return 0;
}