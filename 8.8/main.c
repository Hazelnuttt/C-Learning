#include <stdio.h>
void main()
{
    float fac(int n); /*����Ҫָ�����ͣ���Ϊ��y�Ǹ����ͣ����ԡ�����*/
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
    else            /*���һ��else�������������������ܼ�*/
        y=fac(n-1)*n;
    return(y); /*Ҫ��return����return��return*/
}
