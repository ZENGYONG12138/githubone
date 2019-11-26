#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main(void) {
	string name;
	string pwd;

	cout << "ÇëÊäÈëÕËºÅ: " << endl;
	cin >> name;
		
	cout << "ÇëÊäÈëÃÜÂë: " << endl;
	cin >> pwd;

	//È¨ÏÞÅÐ¶Ï
	if (name == "ZengYong" && pwd == "2969309639") {
		cout << "1.ÍøÂç404¹¥»÷" << endl;
		cout << "2.ÍøÕ¾´Û¸Ä¹¥»÷" << endl;
		cout << "3.ÍøÕ¾¹¥»÷¼ÇÂ¼" << endl;
		cout << "4.DNS¹¥»÷" << endl;
		cout << "5.·þÎñÆ÷ÖØÆô¹¥»÷" << endl;
	}
	else {
		cout << "ÓÃ»§Ãû»òÃÜÂë´íÎó!" << endl;
	}

	system("pause");
	return 0;
}