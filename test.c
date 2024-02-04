
#include<stdio.h>

int main() {

	int a = 1;
	if (*(char*)&a == 1)
		printf("Ð¡¶Ë\n");
	else
		printf("´ó¶Ë\n");

	
	

	return 0;
}