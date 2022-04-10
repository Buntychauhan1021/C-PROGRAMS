#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d\n", &a);
    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }
    return 0;
}