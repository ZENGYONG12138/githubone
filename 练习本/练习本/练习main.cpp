
/*
��ϰ1�����û�����һ����ĸ������෴�Ĵ�Сд��ĸ��
*/

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main(void) {
	char zeng;

	cout << "������һ����ĸ��";
	cin >> zeng;

	if (zeng >= 'a' && zeng <= 'z') {
		zeng = zeng - 'a' + 'A';
	} else if(zeng >= 'A' && zeng <= 'Z') {
		zeng = zeng - 'A' + 'a';
	}

	cout << zeng << endl;
	system("pause");
	return 0;
}