#include"main.h"

//��
float add(float a, float b)
{
	float y;
	y = a + b;
	return y;
}

//��
float sub(float a, float b)
{
	float y;
	y = a - b;
	return y;
}

//��
float multi(float a, float b)
{
	float y;
	y = a * b;
	return y;
}

//��
float divi(float a, float b)
{
	float y;
	y = a / b;
	return y;
}

//���η���
float equation(float a, float b, float c)
{
	float disc, x1, x2, realpart, imagpart;
	if (fabs(a) <= 1e-6) {
		printf("�÷��̲��Ƕ��η��̣����������룡");
	}
	else {
		disc = b * b - 4*a*c;
		if (fabs(disc) <= 1e-6) {
			printf("�÷�����������ȵĸ�:%8.4f\n", -b / (2 * a));
		}
		else if(fabs(disc) > 1e-6) {
			x1 = -b / (2 * a) + sqrt(disc) / (2 * a);
			x2 = -b / (2 * a) - sqrt(disc) / (2 * a);
			printf("���̵�����ʵ���ǣ�\n%8.4f,%8.4f", x1, x2);
		}
		else {
			realpart = -b / (2 * a);
			imagpart = sqrt(-disc) / (2 * a);
			printf("��������������ǣ�\n");
			printf("%8.4f+%8.4fi\n", realpart, imagpart);
			printf("%8.4f+%8.4fi\n", realpart, imagpart);
		}
	}
}

//ƽ��ֵ
float aver(float string[], int n)
{
	int i;
	float average, sum = string[0];
	for (i = 1; i < n; i++) {
		sum = sum + string[i];
	}
	average = sum / n;
	return average;
}

//����
float s(float string[],float aver, int n)
{
	int i;
	float fc,sum =pow(fabs(aver - string[0]),2);
	for (i = 1; i < n; i++) {
		sum = sum + pow(fabs(aver - string[i]),2);
	}
	printf("����Ϊ%f\n", sum / (n*1.0));
	
}