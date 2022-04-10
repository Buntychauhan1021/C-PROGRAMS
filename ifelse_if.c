#include <stdio.h>
int main()
{ 
    int num;
    printf("Enter the number \n");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("your number is 1\n");
    }
    else if (num == 2)
    {
        printf("your number is 2\n");
    }
    else if (num == 3)
    {
        printf("your number is three\n");
    }
    else if (num == 4)
    {
        printf("your number is four\n");
    }
    else
    {
        printf("wrong choice\n");
    }
    return 0;
}