#include <stdio.h>
int factorial(int x);
void main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);

    printf("The factorial of  %d id %d ", n, factorial(n));
}
int factorial(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}