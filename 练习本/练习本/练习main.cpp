
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main(void) {
	string name;
	string pwd;

	while (1) {
		system("cls"); //Çå³ýÆÁÄ»
		cout << "ÇëÊäÈëÕËºÅ£º";
		cin >> name;

		cout << "ÇëÊäÈëÃÜÂë£º";
		cin >> pwd;

		system("cls");

		if (name == "Zeng" && pwd == "123456") {
			break;
		} else {
			cout << "ÓÃ»§Ãû»òÃÜÂë´íÎó£¡" << endl;
			system("pause");
		}
	}

	system("cls");

	cout << "1.ÍøÕ¾404¹¥»÷" << endl;
	cout << "2.ÍøÕ¾´Û¸Ä¹¥»÷" << endl;
	cout << "3.ÍøÕ¾¹¥»÷¼ÇÂ¼" << endl;
	cout << "4.DNS¹¥»÷" << endl;
	cout << "5.·þÎñÆ÷ÖØÆô¹¥»÷" << endl;

	system("pause");
	return 0;
}