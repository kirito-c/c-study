#include<iostream>
using namespace std;

class cube
{
public:
	//设置长
	void setLenth(int Lenth)
	{
		m_L = Lenth;
	}
	//获取长
	int getLenth()
	{
		return m_L;
	}

	//设置宽
	void setWidth(int Width)
	{
		m_W = Width;
	}
	//获取宽
	int getWidth()
	{
		return m_W;
	}
	//设置高
	void setHight(int Hight)
	{
		m_H = Hight;
	}
	//获取高
	int getHight()
	{
		return m_H;
	}
	//获取立方体表面积
	int getsquare()
	{
		return 2 * (m_H * m_L + m_H * m_W + m_L * m_W);
	}
	//获取立方体体积
	int getvolume()
	{
		return m_L * m_H * m_W;
	}
	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(cube &c)//只需要传一个就行
	{
		if (getLenth() == c.getLenth() && getWidth() == c.getWidth() && getHight() == c.getHight())
		{
			return true;
		}
		return false;
	}
private:
	int m_L;
	int m_W;
	int m_H;
};

bool isSame(cube &c1,cube &c2)
{
	if (c1.getLenth() == c2.getLenth() && c1.getWidth() == c2.getWidth() && c1.getHight() == c2.getHight())
	{
		return true;
	}
	return false;
}
int main6()
{
	cube c1;
	c1.setHight(10);
	c1.setLenth(5);
	c1.setWidth(4);
	/*cout << "立方体的长为：" << c1.getLenth() << endl;
	cout << "立方体的宽为：" << c1.getWidth() << endl;
	cout << "立方体的高为：" << c1.getHight() << endl;*/
	cout << "立方体的表面积为：" << c1.getsquare() << endl;
	cout << "立方体的体积为：" << c1.getvolume() << endl;
	cube c2;
	c2.setHight(10);
	c2.setLenth(5);
	c2.setWidth(4);
	//利用全局函数判断
	bool ret = isSame(c1,c2);
	if (ret)
	{
		cout << "c1和c2是相等的" << endl;
	}
	else
	{
		cout << "c1和c2不相等" << endl;
	}
	//利用成员函数判断
	ret = c1.isSameByClass(c2);
	if (ret)
	{
		cout << "成员函数判断结果：c1和c2是相等的" << endl;
	}
	else
	{
		cout << "成员函数判断结果：c1和c2不相等" << endl;
	}

	system("pause");
	return 0;
}