#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
    {
        printf("uppercase");
    }
    else
    {
        printf("not uppercase");
    }
    return 0;
}