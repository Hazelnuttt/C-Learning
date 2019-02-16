#include"main.h"
void main()
{
	int num,n,i;
	float a, b, c, res, average;
	float array[30];
begin: 
	{
	printf("输入需要的功能前的序号：\n\t\t\t*1.加法\n\t\t\t*2.减法\n\t\t\t*3.乘法\n\t\t\t*4.除法\n");
	printf("\t\t\t*5.二次方程\n");
	printf("\t\t\t*6.平均值\n");
	printf("\t\t\t*7.方差\n");
	scanf("%d", &num);
	
	while (num < 1 || num>7)
	{
		printf("------------------------------------------\n");
		printf("|您输入的序号不在功能范围内，请重新输入！|\n");
		printf("------------------------------------------\n");
		goto begin;
	}
	if (num >= 1 && num <= 4) {
		printf("\n请输入两个数，并用逗号分隔开！\n");
		scanf("%f,%f", &a, &b);
		switch (num)
		{
		case 1:res = add(a, b); printf("%f + %f = %f\n", a, b, res); break;
		case 2:res = sub(a, b); printf("%f - %f = %f\n", a, b, res); break;
		case 3:res = multi(a, b); printf("%f * %f = %f\n", a, b, res); break;
		case 4:res = divi(a, b); printf("%f / %f = %f\n", a, b, res); break;
		default:
			break;
		}
		printf("=========================================\n\n");
		goto begin;
	}
	else if (num == 5) {
		printf("输入方程的三个参数,用逗号分隔开!\n");
		scanf("%f,%f,%f", &a, &b, &c);
		equation(a, b, c);
		printf("\n");
		printf("=========================================\n\n");
		goto begin;
	}
	else if (num == 6) {
	err6: {
		printf("输入将要输入数据的数量！注意：数据量小于30\n");
		scanf("%d", &n);
		if (n > 30) {
			printf("----------------------------------\n");
			printf("|数据量不能超过三十，请重新输入！|\n");
			printf("----------------------------------\n");
			goto err6;
		}
		else {
			printf("输入一组数据，数据之间用空格隔开！\n");
			for (i = 0; i < n; i++) {
				scanf("%f", &array[i]);
			}
			average = aver(array, n);
			printf("平均值为%f\n", average);
			printf("=========================================\n\n");
			goto begin;
		}
		}
	}
	else if (num == 7) {
	err7: {
		printf("输入将要输入数据的数量！注意：数据量小于30\n");
		scanf("%d", &n);
		if (n > 30) {
			printf("----------------------------------\n");
			printf("|数据量不能超过三十，请重新输入！|\n");
			printf("----------------------------------\n");
			goto err7;
		}
		else {
			printf("输入一组数据，数据之间用空格隔开！\n");
			for (i = 0; i < n; i++) {
				scanf("%f", &array[i]);
			}
			average = aver(array, n);
			s(array, average, n);
			printf("=========================================\n\n");
			goto begin;
		}
		}

	}

	}
}

