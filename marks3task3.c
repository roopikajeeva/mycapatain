#include<stdio.h>
int main()
{
    int m1,m2,m3,sum=0;
    float avg=0;

    printf("Enter the marks in three subjects;\n");
    scanf("%d %d %d",&m1,&m2,&m3);

    sum=m1+m2+m3;
    avg=sum/3;

    printf("SUM=%d\nAVERAGE=%f",sum,avg);


}
