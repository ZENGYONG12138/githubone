
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main(void) {
	string name;
	string pwd;

	while (1) {
		system("cls"); //�����Ļ
		cout << "�������˺ţ�";
		cin >> name;

		cout << "���������룺";
		cin >> pwd;

		system("cls");

		if (name == "Zeng" && pwd == "123456") {
			break;
		} else {
			cout << "�û������������" << endl;
			system("pause");
		}
	}

	system("cls");

	cout << "1.��վ404����" << endl;
	cout << "2.��վ�۸Ĺ���" << endl;
	cout << "3.��վ������¼" << endl;
	cout << "4.DNS����" << endl;
	cout << "5.��������������" << endl;

	system("pause");
	return 0;
}