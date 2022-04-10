# include<stdio.h>
# include<string.h>
int main(){
    char str[200]="java this is keshav";
    char *rev;
    printf("enter the string\n");
    rev = strstr(str,"this");
    printf("the string is :%s",rev);
    } 