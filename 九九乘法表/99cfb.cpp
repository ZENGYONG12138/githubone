#include <iostream>
#include <stdio.h>
#include <string>
#include <Windows.h>

using namespace std;

int main(void) {
	int i,j;

	for(i = 0; i <= 9; i++) {
		for(j=1; j<i+1; j++) 
			printf("%d*%d=%2d\t",i,j,i*j);
			printf("\n");
		
	}


	system("pause");
	return 0;
}