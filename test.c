
#include<stdio.h>

int main() {

	int a = 1;
	if (*(char*)&a == 1)
		printf("С��\n");
	else
		printf("���\n");

	
	

	return 0;
}