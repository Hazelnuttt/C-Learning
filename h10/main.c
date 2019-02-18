#include <stdio.h>
#define N 10
void main()
{
	int str[N + 1] = { 1,5,7,8,9,12,14,16,23,34 };
	int x, i;
	printf("输入一个整数：\n");
	scanf("%d", &x);
	printf("插入前的数列：\n");
	for (i = 0; i < N; i++) {
		printf("%d ", str[i]);
	}
	printf("\n");
	int *p, *q;
	p = str;
	while (*p < x)p++; //找到插入的位置
	q = p;
	for (p = (str + N - 1); p >= q; p--) {
		*(p + 1) = *p; //从序列最后一个元素，向后移动
	}
	*q = x;
	printf("插入后的数列：\n");
	for (i = 0; i < (N + 1); i++) {
		printf("%d ", str[i]);
	}
}
