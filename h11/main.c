#include<stdio.h>
#include<string.h>
#define N 5
struct student
{
	char num[13]; //�ַ���
	char name[20]; //�ַ���
	int score[3]; //����
	int fail;
};
void main()
{
	struct student a[N];
	int i, j, n;
	printf("input %d student:num  name  score\n", N);
	for (i = 0; i < N; i++)
	{
		scanf("%s%s", a[i].num, a[i].name); //�ṹ������һ�㣬�൱��ָ��
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i].score[j]); //ָ���ǲ�����֮һ��������һ�� ***
	}
}