#include<stdio.h>
#include<string.h>
int main()
{
    char first[20],second[20],full[40];

    printf("Enter your first name\n");
    gets(first);

    printf("Enter your last name\n");
    gets(second);

    strcat(first," ");
    strcat(first,second);
    printf("Full Name:%s\n",first);
}
