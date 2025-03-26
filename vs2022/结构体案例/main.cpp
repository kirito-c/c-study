#include<iostream>
using namespace std;

struct student
{
	string sname;
	int score;
};

struct teacher
{
	string tname;
	struct student sArray[5];
};

void allocateSpace(struct teacher tArray[],int lenth)
{
	for (int i = 0; i < lenth; i++)
	{
		string nameseed = "ABCDE";
		tArray[i].tname = "Teacher_";
		tArray[i].tname += nameseed[i];
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sname = "Student_";
			tArray[i].sArray[j].sname += nameseed[j];

			int random = rand() % 61 + 40;//随机40~100的数
			tArray[i].sArray[j].score = random;


		}
	}
}

void printinfo(struct teacher tArray[], int lenth)
{
	for (int i = 0; i < lenth; i++)
	{
		cout << "老师姓名："<< tArray[i].tname << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].sname
				<< "学生成绩：" << tArray[i].sArray[j].score
				<< endl;
		}
	}
	

}
int main()
{
	srand(time(0));

	struct teacher tArray[3];
	int lenth = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray,lenth);
	printinfo(tArray, lenth);




	system("pause");
	return 0;
}