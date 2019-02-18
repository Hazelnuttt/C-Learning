#include<stdio.h>
#define N 10
void main()
{
	int str[N + 1] = { 1,3,5,7,9,14,35,45,56,67 };
	int x, t, i;
	int *p;
	printf("输入要插入的数字：\n");
	scanf("%d", &x);
	printf("插入前的数组：\n");
	for (i = 0; i < N; i++) {
		printf("%d ", str[i]);
	}
	printf("\n");
	p = (str + N);
	*p = x; //在数组后面插入一个数字，只能用指针
	/*str[N + 1] = x;*/  //不能用这种直接令；
	for (p = (str + N); p >= str; p--) {
		if (*p < *(p - 1)) {
			t = *(p - 1);
			*(p - 1) = *p;
			*p = t;  //交换
		}
	}
	printf(" 插入后的数组:\n");
	for (i = 0; i < (N + 1); i++) {
		printf("%d ", str[i]);
	}

}