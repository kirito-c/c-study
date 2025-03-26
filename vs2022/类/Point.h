#pragma once
#include<iostream>
using namespace std;
class Point//点类
{
public:
	//设置x坐标
	void setX(int x);
	
	//获取x坐标
	int getX();
	
	//设置Y坐标
	void setY(int Y);
	
	//获取Y坐标
	int getY();
	
	//设置xy坐标
	void setXY(int x, int y);
	
private:
	int m_X;
	int m_Y;
};
