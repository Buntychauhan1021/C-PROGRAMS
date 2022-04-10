#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    //one liner
    (a < 5) ? printf("A is less than 5") : printf("A is not less than 5");
}