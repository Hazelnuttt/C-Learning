#include"main.h"
void main()
{
	int num,n,i;
	float a, b, c, res, average;
	float array[30];
begin: 
	{
	printf("������Ҫ�Ĺ���ǰ����ţ�\n\t\t\t*1.�ӷ�\n\t\t\t*2.����\n\t\t\t*3.�˷�\n\t\t\t*4.����\n");
	printf("\t\t\t*5.���η���\n");
	printf("\t\t\t*6.ƽ��ֵ\n");
	printf("\t\t\t*7.����\n");
	scanf("%d", &num);
	
	while (num < 1 || num>7)
	{
		printf("------------------------------------------\n");
		printf("|���������Ų��ڹ��ܷ�Χ�ڣ����������룡|\n");
		printf("------------------------------------------\n");
		goto begin;
	}
	if (num >= 1 && num <= 4) {
		printf("\n�����������������ö��ŷָ�����\n");
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
		printf("���뷽�̵���������,�ö��ŷָ���!\n");
		scanf("%f,%f,%f", &a, &b, &c);
		equation(a, b, c);
		printf("\n");
		printf("=========================================\n\n");
		goto begin;
	}
	else if (num == 6) {
	err6: {
		printf("���뽫Ҫ�������ݵ�������ע�⣺������С��30\n");
		scanf("%d", &n);
		if (n > 30) {
			printf("----------------------------------\n");
			printf("|���������ܳ�����ʮ�����������룡|\n");
			printf("----------------------------------\n");
			goto err6;
		}
		else {
			printf("����һ�����ݣ�����֮���ÿո������\n");
			for (i = 0; i < n; i++) {
				scanf("%f", &array[i]);
			}
			average = aver(array, n);
			printf("ƽ��ֵΪ%f\n", average);
			printf("=========================================\n\n");
			goto begin;
		}
		}
	}
	else if (num == 7) {
	err7: {
		printf("���뽫Ҫ�������ݵ�������ע�⣺������С��30\n");
		scanf("%d", &n);
		if (n > 30) {
			printf("----------------------------------\n");
			printf("|���������ܳ�����ʮ�����������룡|\n");
			printf("----------------------------------\n");
			goto err7;
		}
		else {
			printf("����һ�����ݣ�����֮���ÿո������\n");
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

