#include <stdio.h>

void main() {
	printf("Hello C\n");
	//����
	int num = 1;
	//С��
	double score = 2.3;
	//�ַ�
	char gender = 'a';
	//�ַ���
	//ע����C�����У�û���ַ������ͣ�ʹ���ַ��������ʾ�ַ���
	char name[] = "�й��";
	//�������������� %d С�� %f ���ϣ������С���� %.2f ��������
	//�����������ַ� %c ������ַ��� %s
	printf("num = %d score = %.1f gender = %c name = %s\n", num, score, gender, name);
	/**
	* C�������ݽṹ
	* 
	* �������� short int long float double char
	*  
	* �������� ���飬�ṹ�� struct�������� union��ö������ enum
	* 
	* ָ������
	* 
	* ������ void
	*/
	int n = 3.1;
	printf("n = %d\n", n);

	printf("intռ���ֽ� = %d\n", size());

	testLong();

	printf("--------------------------------------------------\n");
	floatTest();
	charTest();
	testBoolean();
}