#include <stdio.h>

void main() {
	printf("Hello C\n");
	//整型
	int num = 1;
	//小数
	double score = 2.3;
	//字符
	char gender = 'a';
	//字符串
	//注意在C语言中，没有字符串类型，使用字符串数组表示字符串
	char name[] = "尚硅谷";
	//如果输出的是整形 %d 小数 %f 如果希望保留小数点 %.2f 依次类推
	//如果输出的是字符 %c 如果是字符串 %s
	printf("num = %d score = %.1f gender = %c name = %s\n", num, score, gender, name);
	/**
	* C语言数据结构
	* 
	* 基本类型 short int long float double char
	*  
	* 构造类型 数组，结构体 struct，共用体 union，枚举类型 enum
	* 
	* 指针类型
	* 
	* 空类型 void
	*/
	int n = 3.1;
	printf("n = %d\n", n);

	printf("int占的字节 = %d\n", size());

	testLong();

	printf("--------------------------------------------------\n");
	floatTest();
	charTest();
	testBoolean();
}