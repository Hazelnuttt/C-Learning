#include <stdio.h>
//��ά����---ÿ��ѧ����ƽ����
float aver_stu(float t[][5]);//����������ÿһ���м�������֪��;����һά���飬�ڲ���ȷ���ȵ�����£����Դ�����������
float high(int t[][5])
void main()
{
    float stu[10][5];//����ġ�10����ʾ��ʮ��ѧ������5����ʾÿ��ѧ�����ſγ̣�����һ������ʱ������Ҫ��ȷ���ȡ�
    int i,j;
    for(i=0;i<10;i++)
        for(j=0;j<5;j++)
        scanf("%f",&stu[i][j]);//�������������е�����
    aver_stu(stu);//���ú���
    high(stu);
}
//���庯��

//ƽ��ֵ
float aver_stu(float t[][5])
{
    int i,j;
    float sum=0.0,aver;//1.����2.���3.ƽ����������ǰ����͵�������߾���
    for(i=0;i<10;i++){
        for(j=0;j<5;j++)
            sum= sum + t[i][j];
        aver=sum/5; //���԰�����ƽ��ֵ�ŵ�һ��һά������
        printf("No.%d��ѧ����ƽ��ֵ��%f\n",i+1,aver);
    }
}

//��ά������ߣ�����λ����i�У���j��
float high(int t[][5])
{
    int i,j;
    int stu=0;cour=0;
    float max=t[0][0];
    for(i=0;i<10;i++){
        for(j=0;j<5;j++)
            if(a[i][j]>max)
            max = a[i][j];
        stu=i+1;//�����λ�������ڲ��һ��ѭ������
        cour=j+1;
    }
    printf("No.%d student,No.%d course",stu,cour);
}
