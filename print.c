#include <stdio.h>
void printpattern(int n);
int main()
{
    int m;
    printf("Print any number \n");
    scanf("%d", &m);
    printpattern(m);
    return 0;
}
void printpattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    printpattern(n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
}