#include<stdio.h>
int main()
{
    int i,n,fact=1;

    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of the given number is %d",fact);
}
