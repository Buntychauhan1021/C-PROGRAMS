# include<stdio.h>
# include<string.h>
void main(){
     char str[100];
     int len=0,i;

    printf("enter the string\n");
    gets(str);
    len=strlen(str);
    printf("after reverse string is\n");
    for ( i = len-1; i >=0; i--)
    {
        printf("%c",str[i]);
    }
    

}