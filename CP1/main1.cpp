#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main(void) {
	string name;
	string pwd;

	cout << "�������˺�: " << endl;
	cin >> name;
		
	cout << "����������: " << endl;
	cin >> pwd;

	//Ȩ���ж�
	if (name == "ZengYong" && pwd == "2969309639") {
		cout << "1.����404����" << endl;
		cout << "2.��վ�۸Ĺ���" << endl;
		cout << "3.��վ������¼" << endl;
		cout << "4.DNS����" << endl;
		cout << "5.��������������" << endl;
	}
	else {
		cout << "�û������������!" << endl;
	}

	system("pause");
	return 0;
}