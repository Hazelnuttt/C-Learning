#include <stdio.h>
#define CHANGE 1
void main()
{
    int i;
    char string[81],c;//定义一个字符串用数组,'char';得到字符串中的字符c,'%c'。
    gets(string);//输入字符串
    //定义的字符串长度是大于大于实际长度的，则需要读取到实际长度截止。这里使用while很合适
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
    printf("\n");//在while里不能换行
}

//预编译
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
