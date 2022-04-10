#include <stdio.h>
float force(float mass);
int main()
{
    float m;
    printf("Enter the number\n");
    scanf("%f", &m);
    printf("The value of mass %.1f", force(m));
    return 0;
}
float force(float mass)
{
    float result = mass * 9.8;
    return result;
}