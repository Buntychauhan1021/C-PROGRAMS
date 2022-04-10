#include <stdio.h>
int main()
{
    int remender, n, rev = 0;
    printf("Enter the number:\n");
    scanf("%d", &n);
    for (int i = 0; i != n; n = n / 10)
    {
        remender = n % 10;
        rev = rev * 10 + remender;
        // n = n / 10;
    }
    printf("%d", rev);
}