#include <stdio.h>
/*
* 字符串 在C语言中，数组不是基本数据类型，而是构造类型，在C语言中用char数组来表示字符串
*/
void charTest() {
	char c = 'a';
	char name [] = "测试";
	char a = 97;
	printf("c=%c name = %s a = %c\n", c, name,a);

	int num = c + 10;

	printf("num = %d\n",num);
}