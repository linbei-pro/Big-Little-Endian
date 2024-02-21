
#include<stdio.h>

int main() {
	//方法一：强制类型转换
	int a = 1;
	if (*(char*)&a == 1)
		printf("小端\n");
	else
		printf("大端\n");
	//方法二：利用联合（共用体）的性质
	//本质还是强制类型转换
	union un
	{
		char c;
		int i;
	}u;
	u.i = 1;//u.i 是int型 位4个字节，若小端存储则为 01 00 00 00
	if (u.c == 1)//取 u.c 位char型 一个字节，若为小端存储 则为 1
		printf("小端\n");
	else
		printf("大端\n");

	return 0;
}
