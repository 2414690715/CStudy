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

	//����ʹ�ú궨������ֱ�۵ı�ʾ
	bool isMerry = true;
	if (isMerry) {
		printf("�ѽ��\n");
	}
}