#include <stdio.h>
/*
* �ַ��� ��C�����У����鲻�ǻ����������ͣ����ǹ������ͣ���C��������char��������ʾ�ַ���
*/
void charTest() {
	char c = 'a';
	char name [] = "����";
	char a = 97;
	printf("c=%c name = %s a = %c\n", c, name,a);

	int num = c + 10;

	printf("num = %d\n",num);
}