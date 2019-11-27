
/*
练习1：让用户输入一个字母，输出相反的大小写字母。
*/

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main(void) {
	char zeng;

	cout << "请输入一个字母：";
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