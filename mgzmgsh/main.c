#include<stdio.h>
main()
{
	char a[100]; int n[26] = {0}; //26����ĸ����ʼǰ����
	int i;
	gets(a); //���һ���ַ�������gets
	for (i = 0; a[i] != '\0'; i++)n[a[i] - 97]++; //��һ����ĸ����+1
	for (i = 0; i < 26; i++) {
		if (n[i] != 0)printf("%c:%d\n", i + 97, n[i]);
	}
}