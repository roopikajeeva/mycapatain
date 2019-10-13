#include<stdio.h>
int main()
{
    char name[100];
    int age;
    double phone_number=0,ph;
    int n,a;

    printf("Enter your name:\n");
    scanf("%s",&name);
    printf("Enter your age:\n");
    scanf("%d",&age);
    printf("Enter your phone number:\n");
    scanf("%lf",&phone_number);

    n=name;
    a=age;
    ph=phone_number;

    printf("Name of the user:%s\nAge:%d \nPhone number:%lf",n,a,ph);

}
