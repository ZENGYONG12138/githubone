#include <iostream>
#include <Windows.h>

using namespace std;

int main(void) {

	int numberA;
	cout << "������һ������: ";
	cin >> numberA;

	char calcType;
	cout << "������һ�������(+,-,*,/): ";
	cin >> calcType;

	int numberB;
	cout << "������һ������: ";
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
			cout << "��������Ϊ0" << endl;
			exit(1);
		}
		result = numberA / numberB;
		break;
	case '%':
		if (numberB == 0) {
			cout << "ȡ��������Ϊ0" << endl;
			exit(1);
		}
		result = numberA % numberB;
		break;
	default:
		cout << "��֧��+��-��*��/��%" << endl;
		exit(1);
		break;
	}

	cout << numberA << calcType << numberB << "=" << result << endl;

	system("pause");
	return 0;
}