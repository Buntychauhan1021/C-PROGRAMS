# include<stdio.h>
# include<string.h>
void main()
{
    char ch[20]={'f','e','k','k','i','m','a','\0'};
    char ch2[20];
    strcpy(ch2,ch);
    printf("value %s",ch2);
}