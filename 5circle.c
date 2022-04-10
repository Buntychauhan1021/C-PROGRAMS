#include <stdio.h>
#include <conio.h>
int main()
{
    int radious, height = 9;
    float pi = 3.14;
    printf("Enter the radious of circle");
    scanf("%d", &radious);
    printf("The radious is %f\n", pi * radious * radious);
    printf("The volume is %f", pi * radious * radious * height);
    return 0;
}