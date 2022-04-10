#include <stdio.h>
int main()
{
    int i = 0, sum = 0, n;
    printf("Enter the number \n");
    scanf("%d", &n);
    // for (i = 0; i <= n; i++)
    // {
    //     sum = sum + i;
    //     }
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("%d", sum);
    return 0;
}