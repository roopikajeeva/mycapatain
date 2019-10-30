
#include<stdio.h>
#include<string.h>
void isPalindrome(char str[20])
{
    int l = 0;
    int h = strlen(str) - 1;

    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindrome \n", str);
            return;
        }
    }
    printf("%s is palindrome \n", str);
}
void main()
{
	char st[20];
	printf("\nEnter a string: \n");
	gets(st);
	isPalindrome(st);
}
