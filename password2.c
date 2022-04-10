#include <stdio.h>
# include<string.h>
int main()
{
    char u[100] = "hii keshav", p[100] = "12345", u1[100], p1[100];
    printf("Enter the user name \n");
    scanf("%s",u1);
    printf("Enter your password\n");
    scanf("%s",p1);
    if (strcmp(u, u1) == 0 && strcmp(p, p1) == 0)
    {
        printf("Login successfully\n");
    }
    else
    {
        printf("wrong password");
    }
    return 0;
}
