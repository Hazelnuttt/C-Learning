#include <stdio.h>
//二维数组---每个学生的平均分
float aver_stu(float t[][5]);//声明函数，每一行有几个必须知道;若是一维数组，在不明确长度的情况下，可以传入数组名。
float high(int t[][5])
void main()
{
    float stu[10][5];//这里的‘10’表示有十个学生，‘5’表示每个学生五门课程；定义一个数组时，必须要明确长度。
    int i,j;
    for(i=0;i<10;i++)
        for(j=0;j<5;j++)
        scanf("%f",&stu[i][j]);//遍历输入数组中的数据
    aver_stu(stu);//调用函数
    high(stu);
}
//定义函数

//平均值
float aver_stu(float t[][5])
{
    int i,j;
    float sum=0.0,aver;//1.遍历2.求和3.平均；可以提前把求和的首项提高精度
    for(i=0;i<10;i++){
        for(j=0;j<5;j++)
            sum= sum + t[i][j];
        aver=sum/5; //可以把所有平均值放到一个一维数组中
        printf("No.%d的学生的平均值：%f\n",i+1,aver);
    }
}

//二维数组最高，并定位至第i行，第j个
float high(int t[][5])
{
    int i,j;
    int stu=0;cour=0;
    float max=t[0][0];
    for(i=0;i<10;i++){
        for(j=0;j<5;j++)
            if(a[i][j]>max)
            max = a[i][j];
        stu=i+1;//这个定位依赖于内层的一次循环结束
        cour=j+1;
    }
    printf("No.%d student,No.%d course",stu,cour);
}
