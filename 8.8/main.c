#include <stdio.h>
void main()
{
    float fac(int n); /*函数要指定类型，因为有y是浮点型，所以。。。*/
    int n;
    float y;
    printf("input an integer number:\n");
    scanf("%d",&n);
    y=fac(n);
    printf("%d!=%10.0f\n",n,y);
}
float fac(int n)
{
    float y;
    if(n<0)printf("dataerror\n");
    else if(n==0||n==1)y=1;
    else            /*最后一个else，不能有条件啊，不能加*/
        y=fac(n-1)*n;
    return(y); /*要有return，有return，return*/
}
