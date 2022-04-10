#include <stdio.h>
#include<string.h>
void main()
{
    char str1[20];
    char str2[20];
    int k;
    printf("Enter a string:\n");
    gets(str1);
    strcpy(str2,str1);
    strrev(str2);
    k=strcmp(str1,str2);
    if(k==0)
    {
        printf("\nPalindrome");
    }
    else
    {
        printf("\nNot Palindrome");
    }  
    
}