
#include<stdio.h>
int main()
{
   int i,rev=0,rem=0,num,orig;

   printf("Enter a number:\n");
   scanf("%d",&num);

   orig=num;

   while(num>0)
   {
       rem=num%10;
       rev=rev*10+rem;
       num=num/10;
   }
    printf("Reverse of the number is %d",rev);


}
