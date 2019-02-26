#include<stdio.h>
main()
{
	char a[100]; int n[26] = {0}; //26个字母，开始前清零
	int i;
	gets(a); //获得一个字符串，用gets
	for (i = 0; a[i] != '\0'; i++)n[a[i] - 97]++; //有一个字母，就+1
	for (i = 0; i < 26; i++) {
		if (n[i] != 0)printf("%c:%d\n", i + 97, n[i]);
	}
}