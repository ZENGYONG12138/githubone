
#include  <graphics.h> 	// ���� EasyX ͼ�ο�
#include  <Windows.h>

/*
 ��������:
 DNS����
*/

int main(void)
{
	initgraph(600, 400);	// ��ʼ��ͼ�ν���, ������СΪ640x480

	loadimage(0, ("bg.jpg"));

	settextcolor(RGB(255, 255, 0));      //����������ɫ
	settextstyle(30, 0, "΢���ź�");

	rectangle(300, 40, 550, 80);     //(���Ͻ�x,���Ͻ�y, ���Ͻ�x�����Ͻ�
	outtextxy(310, 45, "1-��վ404����"); //��ָ��λ������ı�

	rectangle(300, 100, 550, 140);
	outtextxy(310, 105, "2-��վ�۸Ĺ���"); //��ָ��λ������ı�

	rectangle(300, 160, 550, 200);
	outtextxy(310, 165, "3-��վ�����޸�"); //��ָ��λ������ı�

	rectangle(300, 220, 550, 260);
	outtextxy(310, 225, "4-�鿴������¼"); //��ָ��λ������ı�

	// �������� (x���겻��, y��������60)
	rectangle(300, 280, 550, 320);
	outtextxy(310, 285, "5-DNS����");

	// �޸�����"�˳�"�˵���λ��, �Ͳ˵����
	//rectangle(300, 280, 550, 320);
	//outtextxy(310, 285, "5-�˳�"); 
	rectangle(300, 340, 550, 380);
	outtextxy(310, 345, "6-�˳�"); //��ָ��λ������ı�

	system("pause");
	closegraph();			   // �ر�ͼ�ν���
}



/*
#include <iostream>
#include <Windows.h>
*/
/*
1.��վ404����
2.��վ�۸Ĺ���
3.��վ������¼
4.DNS����
5.��������������
*/
/*
using namespace std;

int main(void) {

	cout << "1.����404����" << endl;
	cout << "2.��վ�۸Ĺ���" << endl;
	cout << "3.��վ������¼" << endl;
	cout << "4.DNS����"	<< endl;
	cout << "5.��������������" << endl;

	system("pause");
	return 0;
}
*/