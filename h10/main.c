#include <stdio.h>
#define N 10
void main()
{
	int str[N + 1] = { 1,5,7,8,9,12,14,16,23,34 };
	int x, i;
	printf("����һ��������\n");
	scanf("%d", &x);
	printf("����ǰ�����У�\n");
	for (i = 0; i < N; i++) {
		printf("%d ", str[i]);
	}
	printf("\n");
	int *p, *q;
	p = str;
	while (*p < x)p++; //�ҵ������λ��
	q = p;
	for (p = (str + N - 1); p >= q; p--) {
		*(p + 1) = *p; //���������һ��Ԫ�أ�����ƶ�
	}
	*q = x;
	printf("���������У�\n");
	for (i = 0; i < (N + 1); i++) {
		printf("%d ", str[i]);
	}
}
