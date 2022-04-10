#include <stdio.h>
#include <conio.h>

void main()
{

    int a, b;
    printf("Enter the number\n");
    scanf("%d %d",&a,&b);
    add(a,b);
}
void add(int x, int y)
{
    int c;
    c = x + y;
    printf("%d",c);
}