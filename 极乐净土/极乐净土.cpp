#include<graphics.h>
#include<Windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

int main(void)
{
	initgraph(800, 450);
	loadimage(0, _T("jile.jpg"));
	mciSendString(_T("play ���־���.mp3 repeat"), 0, 0, 0);
	system("pause");
	closegraph();
	return 0;
}