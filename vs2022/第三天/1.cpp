#include<iostream>
using namespace std;
int main1()
{
	int score = 0;

	cout << "请输入分数" << endl;
	cin >> score;

	if (score > 600)
		cout << "考上一本大学" << endl;
	else
		cout << "没有考上一本大学" << endl;
	system("pause");

	return 0;
}