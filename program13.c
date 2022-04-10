#include <stdio.h>
int sum(int a, int b);
int main()
{
    int c, n, m;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the value of m\n");
    scanf("%d", &m);
    c = sum(n, m);
    printf("The sum is %d", c);
    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
