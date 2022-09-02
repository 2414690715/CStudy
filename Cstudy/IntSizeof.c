#include <stdio.h>
int size() {
	return sizeof(int);
}

void testLong() {
	long a = 123123134;
	//如果输出的是long 则格式为%ld
	printf("%ld\n", a);
}