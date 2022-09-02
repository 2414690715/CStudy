#include <stdio.h>
#include <stdbool.h>
#define BOOL int
#define TRUE 1
#define FALSE 0

void testBoolean() {
	BOOL isPass = FALSE;
	if (isPass) {
		printf("pass\n");
	}
	printf("no pass\n");

	//可以使用宏定义来更直观的表示
	bool isMerry = true;
	if (isMerry) {
		printf("已结婚\n");
	}
}