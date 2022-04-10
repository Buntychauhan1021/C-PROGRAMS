#include <stdio.h>
int main()
{
    int rating;
    printf("Enter your rating\n");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("your rating is 1\n");
        break;
    case 2:
        printf("your rating is 2\n");
        break;
    case 3:
        printf("your rating is 3\n");
        break;
    case 4:
        printf("your rating is 4\n");
        break;

    default:
        printf("wrong choice\n");
        break;
    }
    return 0;
}