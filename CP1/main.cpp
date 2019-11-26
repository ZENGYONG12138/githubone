
#include  <graphics.h> 	// 引用 EasyX 图形库
#include  <Windows.h>

/*
 新增需求:
 DNS攻击
*/

int main(void)
{
	initgraph(600, 400);	// 初始化图形界面, 画布大小为640x480

	loadimage(0, ("bg.jpg"));

	settextcolor(RGB(255, 255, 0));      //设置字体颜色
	settextstyle(30, 0, "微软雅黑");

	rectangle(300, 40, 550, 80);     //(左上角x,左上角y, 右上角x，右上角
	outtextxy(310, 45, "1-网站404攻击"); //在指定位置输出文本

	rectangle(300, 100, 550, 140);
	outtextxy(310, 105, "2-网站篡改攻击"); //在指定位置输出文本

	rectangle(300, 160, 550, 200);
	outtextxy(310, 165, "3-网站攻击修复"); //在指定位置输出文本

	rectangle(300, 220, 550, 260);
	outtextxy(310, 225, "4-查看攻击记录"); //在指定位置输出文本

	// 新增功能 (x坐标不变, y坐标增加60)
	rectangle(300, 280, 550, 320);
	outtextxy(310, 285, "5-DNS攻击");

	// 修改最后的"退出"菜单的位置, 和菜单序号
	//rectangle(300, 280, 550, 320);
	//outtextxy(310, 285, "5-退出"); 
	rectangle(300, 340, 550, 380);
	outtextxy(310, 345, "6-退出"); //在指定位置输出文本

	system("pause");
	closegraph();			   // 关闭图形界面
}



/*
#include <iostream>
#include <Windows.h>
*/
/*
1.网站404攻击
2.网站篡改攻击
3.网站攻击记录
4.DNS攻击
5.服务器重启攻击
*/
/*
using namespace std;

int main(void) {

	cout << "1.网络404攻击" << endl;
	cout << "2.网站篡改攻击" << endl;
	cout << "3.网站攻击记录" << endl;
	cout << "4.DNS攻击"	<< endl;
	cout << "5.服务器重启攻击" << endl;

	system("pause");
	return 0;
}
*/