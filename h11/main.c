#include<stdio.h>
#include<string.h>
#define N 5
struct student
{
	char num[13]; //字符串
	char name[20]; //字符串
	int score[3]; //数组
	int fail;
};
void main()
{
	struct student a[N];
	int i, j, n;
	printf("input %d student:num  name  score\n", N);
	for (i = 0; i < N; i++)
	{
		scanf("%s%s", a[i].num, a[i].name); //结构体里面一层，相当于指针
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i].score[j]); //指针那层其中之一，的里面一层 ***
	}
}