#include <stdio.h>
void main()
{
    int a[10];
    int i,j,t;
    printf("input 10 numbers:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("\n");
    for(j=0;j<9;j++)/*�Ƚ�9��*/
        for(i=0;i<9-j;i++)/*ÿ�˱Ƚ�9-j��*/
        if(a[i]>a[i+1])/*���ڵıȽ�*/
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
        printf("the sorted numbers:\n");
        for(i=0;i<10;i++)
            printf("%d ",a[i]);
        printf("\n");
}
