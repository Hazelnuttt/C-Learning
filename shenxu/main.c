#define M 10
#define N 10
#include<stdio.h>
main()
{
	int a[M] = { 1,3,5,7,9,77,79,81,88,89 };
	int b[N] = { 2,6,8,10,26,88,90,96,98,99 };
	int i, j, k, c[M + N];
	i = j = k = 0;
	do
	{
		if (a[i] < b[j])c[k++] = a[i++];
		else c[k++] = b[j++];
		/*if (a[i] < b[j]) { c[k] = a[i];
		k++;
		i++;
		}//这是两步合并
		else {
			c[k] = b[j];
			k++;
			j++;
		}*/
		if (i == M && j < N) {
			for (; j < N; j++)c[k++] = b[j];
		}
		if (i < M && j == N) {
			for (; i < M; i++)c[k++] = a[i];
		}
		if (i == M && j == N)break;
	} while (1);
	for (j = 0; j < k; j++)
		printf("%3d", c[j]);
		
}