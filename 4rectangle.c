#include <stdio.h>
#include <conio.h>
int main()
{
    float length, breadth, area;
    printf("Enter the length of rectangle");
    scanf("%f", &length);
    printf("Enter the breadth of recangle");
    scanf("%f", &breadth);
    area = length * breadth;
    printf("The area is %f", area);
    return 0;
}