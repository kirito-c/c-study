#include <stdio.h>
#include <easyx.h>
#include <time.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")
#define MAXSTARS  800
#define MAXMETEOR 100
//定义一个星星类型
struct Stars
{
	int x;
	int y;
} stars[MAXSTARS];

//定义流星
struct Meteor
{
	int x;
	int y;
	int step;
	int style;
} meteor[MAXMETEOR];

//定义三张流星图片
IMAGE imagel, image2, image3;

//初始化星星
void initstars();
//显示星星
void showstars();
//初始化流星
void initmeteor();
//绘制流星
void drawmeteor();
//移动流星
void movemeteor();
//定时器int ontimer(int duration, int id);
 int main()
//创建窗口
 int graph(1000，600);//宽:1000，高:600

//播放音乐
mciSendString("open 1.mp3 alias bkmusic", NULL, O, NULL);
mciSendString("play bkmusic repeat", NULL, 0, NULL);

//加载素材
loadimage(&imagel, "1.jpg", 25.25);
loadimage(&image2, "2.jpg", 25.25);
loadimage(&image3, "3.jpg", 25.25);

//随机数播种
stand((unsigned int)time(NULL));

//初始化星星
int initstars();
//初始化流星
initmeteor();
//双缓冲
BeginBatchDraw() :
	//死循环
	while (1)
	{
		cleardevice() :

			if (ontimer(150, 0))
			{

				//移动流星
				movemeteor();
			}
		if (ontimer(1000, 1))
		{
			initstars();
		}
		//显示星星
		showstars();
		//绘制流星
		drawmeteor() :
			if (ontimer(5, 2))
			{
				settextcolor(RGB(rand() % 256, rand() % 256rand() % 256)
					settextstyle(30，0，"微软雅黑”);
						//绘制文字
						outtextxy(350，100, "宝宝，希望你能够喜欢~~~");
			}



		FlushBatchDraw();
	}
EndBatchDraw();
return 0;
}
//初始化星星
void initstars()
{
	for (int i = 0; i < MAXSTARS; i++)
	{
		stars[i].x = rand() % 1000;
		stars[i].y = rand() % 600;
	}
}
//显示星星
void showstars()
{
	for (int i = 0; i < MAXSTARS; i++)
	{
		putpixel(stars[i].x, stars[i].y, WHITE);
	}
}
//初始化流星
void initmeteor()
{
	for (int i = 0; i < MAXMETEOR; i++)
	{
		meteor[i].x = rand() % 2000 - 1000; //-1000->999
		meteor[il.y = -200;
		meteor[i].style = rand() % 3 + 1;//1,2,3流星的风格
		meteor[i].step = rand() % 30 + 5; //0->29 =>5 ->34
	}

}
//绘制流星
void drawmeteor()
{
	//100个流星、3种风格
	for (int i = 0; i < MAXMETEOR; i++)
	{
		switch (meteor[i].style)
		{
		case 1:
			putimage(meteor[i].x, meteor[i].y, &imagel);
			break;
		case 2:
			putimage(meteor[i].x, meteor[i].y, &image2);
			break;
		case 3:
			putimage(meteor[i].x, meteor[i].y, &image3);
			break;
		}
	}
}
//移动流星
void movemeteor()
{
	for (int i = 0; i < MAXMETEOR; i++)
	{
		meteor[i].x += meteor[i].step;
		meteor[i].y += meteor[i].step * 0.8;
	}

	//判断
	if (meteor[i].x >= 1000)
	{
		meteor[i].x = rand() % 2000 - 1000;  //-1000->29995
		meteorlil.x = rand() % 2000 - 1000: //-1000->999
	}
	if (meteor[i].y >= 600)
	{
		meteor[i].y = -200;
	}
	//定时器
	int ontimer(int duration, int id)
	{
		static int startTime[10] = { 0 };
		int endTime = clock();
		if (endTime - startTime[id] > duration)
			startTime[id] = endTime;
		return l;
	}
	return 0;
