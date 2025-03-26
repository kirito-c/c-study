#include<iostream>
using namespace std;
#include"Point.h"
#include"Circle.h"

//class Point//点类
//{
//public:
//	//设置x坐标
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//获取x坐标
//	int getX()
//	{
//		return m_X;
//	}
//	//设置Y坐标
//	void setY(int Y)
//	{
//		m_Y = Y;
//	}
//	//获取Y坐标
//	int getY()
//	{
//		return m_Y;
//	}
//	//设置xy坐标
//	void setXY(int x,int y)
//	{
//		m_X = x;
//		m_Y = y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};
//class Circle
//{
//public:
//	//设置半径
//	void setR(int R)
//	{
//		m_R = R;
//	}
//	//获取半径
//	int getR()
//	{
//		return m_R;
//	}
//	//设置圆心
//	void setCenter(Point center)
//	{
//		m_center = center;
//	    
//	}
//	//获取圆心
//	Point getCenter()
//	{
//		return m_center;
//	}
//  
//private:
//	int m_R;
//	Point m_center;
//};

//判断点和圆的位置关系
void isInCircle(Circle &c,Point &p)
{
	//计算两点之间的距离的平方
	int distance = 
	   (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
	   (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	//计算半径的平方
	int rdistance = c.getR() * c.getR();
	if (distance == rdistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rdistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}

int main()
{
	//创建圆
	Circle c;
	c.setR(10);
	Point center;
	center.setXY(10, 0);
	c.setCenter(center);


	//创建点
	Point p;
	p.setX(10);
	p.setY(10);
	//判断关系
	isInCircle(c, p);


	system("pause");
	return 0;
}