#include"main.h"

//加
float add(float a, float b)
{
	float y;
	y = a + b;
	return y;
}

//减
float sub(float a, float b)
{
	float y;
	y = a - b;
	return y;
}

//乘
float multi(float a, float b)
{
	float y;
	y = a * b;
	return y;
}

//除
float divi(float a, float b)
{
	float y;
	y = a / b;
	return y;
}

//二次方程
float equation(float a, float b, float c)
{
	float disc, x1, x2, realpart, imagpart;
	if (fabs(a) <= 1e-6) {
		printf("该方程不是二次方程，请重新输入！");
	}
	else {
		disc = b * b - 4*a*c;
		if (fabs(disc) <= 1e-6) {
			printf("该方程有两个相等的根:%8.4f\n", -b / (2 * a));
		}
		else if(fabs(disc) > 1e-6) {
			x1 = -b / (2 * a) + sqrt(disc) / (2 * a);
			x2 = -b / (2 * a) - sqrt(disc) / (2 * a);
			printf("方程的两个实根是：\n%8.4f,%8.4f", x1, x2);
		}
		else {
			realpart = -b / (2 * a);
			imagpart = sqrt(-disc) / (2 * a);
			printf("方程有两个虚根是：\n");
			printf("%8.4f+%8.4fi\n", realpart, imagpart);
			printf("%8.4f+%8.4fi\n", realpart, imagpart);
		}
	}
}

//平均值
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

//方差
float s(float string[],float aver, int n)
{
	int i;
	float fc,sum =pow(fabs(aver - string[0]),2);
	for (i = 1; i < n; i++) {
		sum = sum + pow(fabs(aver - string[i]),2);
	}
	printf("方差为%f\n", sum / (n*1.0));
	
}