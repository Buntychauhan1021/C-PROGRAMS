#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("enter string\n");
    gets(str);
    printf("string is : %s \n", str);
    printf("reverse string is : %s ", strrev(str));
    return 0;
}