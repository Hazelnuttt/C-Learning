#include<stdio.h>
#define N 10
void main()
{
	int str[N + 1] = { 1,3,5,7,9,14,35,45,56,67 };
	int x, t, i;
	int *p;
	printf("����Ҫ��������֣�\n");
	scanf("%d", &x);
	printf("����ǰ�����飺\n");
	for (i = 0; i < N; i++) {
		printf("%d ", str[i]);
	}
	printf("\n");
	p = (str + N);
	*p = x; //������������һ�����֣�ֻ����ָ��
	/*str[N + 1] = x;*/  //����������ֱ���
	for (p = (str + N); p >= str; p--) {
		if (*p < *(p - 1)) {
			t = *(p - 1);
			*(p - 1) = *p;
			*p = t;  //����
		}
	}
	printf(" ����������:\n");
	for (i = 0; i < (N + 1); i++) {
		printf("%d ", str[i]);
	}

}