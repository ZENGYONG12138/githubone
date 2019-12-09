#include <iostream>
#include <Windows.h>

using namespace std;

int main(void) {

	int numberA;
	cout << "请输入一个数字: ";
	cin >> numberA;

	char calcType;
	cout << "请输入一个运算符(+,-,*,/): ";
	cin >> calcType;

	int numberB;
	cout << "请输入一个数字: ";
	cin >> numberB;

	int result = 0;
	switch (calcType) {
	case '+':
			result = numberA + numberB;
			break;
	case '-':
		result = numberA - numberB;
		break;
	case '*':
		result = numberA * numberB;
		break;
	case '/':
		if (numberB == 0) {
			cout << "除数不能为0" << endl;
			exit(1);
		}
		result = numberA / numberB;
		break;
	case '%':
		if (numberB == 0) {
			cout << "取余数不能为0" << endl;
			exit(1);
		}
		result = numberA % numberB;
		break;
	default:
		cout << "仅支持+，-，*，/，%" << endl;
		exit(1);
		break;
	}

	cout << numberA << calcType << numberB << "=" << result << endl;

	system("pause");
	return 0;
}