#include <stdio.h>
#define CHANGE 1
void main()
{
    int i;
    char string[81],c;//����һ���ַ���������,'char';�õ��ַ����е��ַ�c,'%c'��
    gets(string);//�����ַ���
    //������ַ��������Ǵ��ڴ���ʵ�ʳ��ȵģ�����Ҫ��ȡ��ʵ�ʳ��Ƚ�ֹ������ʹ��while�ܺ���
    i=0;
    while((c=string[i])!='\0'){
        i++;
        #if CHANGE
        if(c>='a'&&c<='z')
            c=c-32;
        #else
        if(c>='A'&&c<='Z')
            c=c+32;
        #endif // CHANGE
        printf("%c",c);
    }
    printf("\n");//��while�ﲻ�ܻ���
}

//Ԥ����
/* 0/1
#if abc
#else
#endif // abc
*/

/*
#ifdef
#else
#endif
*/
