#include <stdio.h>
int size() {
	return sizeof(int);
}

void testLong() {
	long a = 123123134;
	//����������long ���ʽΪ%ld
	printf("%ld\n", a);
}