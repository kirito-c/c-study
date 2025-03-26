#include"Point.h"
	//设置x坐标
void Point::setX(int x)
{
	m_X = x;
}
//获取x坐标
int Point::getX()
{
	return m_X;
}
//设置Y坐标
void Point::setY(int Y)
{
	m_Y = Y;
}
//获取Y坐标
int Point::getY()
{
	return m_Y;
}
//设置xy坐标
void Point::setXY(int x, int y)
{
	m_X = x;
	m_Y = y;
}

