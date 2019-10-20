#include<stdio.h>
int main()
{
    int n,nu,num=0,rem=0;

    printf("Enter a number\n");
    scanf("%d",&n);

    nu=n;

    while(nu>0)
    {
        rem=nu%10;
        num=num+rem*rem*rem;
        nu=nu/10;
    }

    if(num==n)
    {
      printf("It is an Armstrong number");

    }
    else
    {
        printf("It is not an Armstrong number");
    }
}
