#include <stdio.h>
void floatTest() {
	/*
	* �������ǽ���ֵ
	* ����������Ĭ��Ϊdouble�ͣ�����float�ͳ���������"f" �� "F"
	*/
	double a1 = 1.123456789;
	float a2 = 1.2f;
	float a3 = 1.3;
	double b1 = 2.1;
	double b2 = 5.12;
	double b3 = .512; //�ȼ���0.512
	double b4 = 5.12e2; //5.12 * (10^2)
	double b5 = 5.12e-2; // �ȼ��� 5.12 * ��10^-2��
	//������ǣ������ʽΪ%f Ĭ�ϱ���С�������λ
	printf("a1 = %.10f,a2 = %f,a3 = %f,b1 = %f,b2 = %f,b3 = %f,b4 = %f,b5 = %f\n",a1,a2,a3,b1,b2,b3,b4,b5);
}