
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

//1+2+3+4+5......100=?
//¼ÓÁË99´Î

int main(void) {
	int i = 1;
	int s = 0;

	while (1) {
		s += i;
		i++;
		if(i>100) {
			break;
		}
	}

	cout << "s=" << s << endl;

	system("pause");
	return 0;
}