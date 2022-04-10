#include <stdio.h>
void prime(int n);
void main()
{
    int i;
    printf("enter the number : \n");
    scanf("%d",&i);
    prime(i);
}
void prime(int n)
{
    int prime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("This is not prime");
    }
    else
    {
        printf("This is prime");
    }
}