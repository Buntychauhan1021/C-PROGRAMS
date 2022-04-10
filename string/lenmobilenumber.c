# include<stdio.h>
# include<conio.h>
# include<string.h>
void main(){
    char str1[100];
    printf("enter string len\n");
    gets(str1);
    if (strlen(str1)==10)
    {
        printf("correct mobile number\n");
    }
    else 
    {
        printf("wrong mobile number\n");
    }
    }