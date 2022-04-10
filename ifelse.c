#include <stdio.h>
int main()
{
    int age ;
    int vipPass = 0;
    printf("Enter your age \n");
    scanf("%d", &age);
    if ((age <= 70 && age >= 15) || vipPass == 1)
    {
        printf("you are above 15 you can drive");
    }
    else
    {
        printf("you can't do drive");
    }
}