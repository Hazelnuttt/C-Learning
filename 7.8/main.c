#include <stdio.h>
void main()
{
    char string[81];
    int i,word=0,num=0;
    char c;
    gets(string);
    for(i=0;(c=string[i])!='\0';i++)
            if(c==' ')word=0;/*�������ڣ����б����ǵ�����*/
    else if(word==0)/*��������*/
    {
        word=1;
        num+=1;
    }
    printf("there are %d word in the line.\n",num);
}
