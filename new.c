#include <stdio.h>
int main()
{
    int a=99;
    int *k;
    k = &a;
    printf("The address of variable %d\n", *k);
    return 0;
}