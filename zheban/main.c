#include<stdio.h>
#define n 11
main()
{
	int x, low, mid, high, find;
	low = 0; high = n - 1; find = 0;
	int a[] = { 2,5,11,18,24,35,42,50,58,86,92 };
	printf("输入你要查询的数字：\n");
	scanf("%d", &x);
	while ((low<=high) && !find)
	{
		mid = (low + high) / 2;
		if (x == a[mid])find = 1;
		else if (x > a[mid])low = mid + 1;
		else high = mid - 1;
	}
	if (find)
		printf("Success!a[%d]=%d\n", mid, x);
	else printf("Fail! 请确认后重新查询！\n");
}