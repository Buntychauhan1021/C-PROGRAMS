#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    printf("Enter the number of d\n");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("a is greater");
    }
    else if (b > c && b > d)
    {
        printf("b is greater");
    }
    else if (c > d)

    {
        printf("c is greater");
    }
    else
    {
        printf("d is greater");
    }
}