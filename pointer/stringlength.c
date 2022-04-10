# include<stdio.h>
void main(){
    char str[20], *p;
    int count=0;
    printf("enter the string\n");
    gets(str);
    p=str;
    for(;*p!='\0';p++)//while (*p!='\0')
    {
        count++;
       // p++;
    }
    printf("the length of string is %d",count);
    
}