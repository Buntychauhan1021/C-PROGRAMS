# include<stdio.h>
# include<string.h>
void main(){
    char str1[20];
    printf("enter the string\n");
    gets(str1);
    printf("string is:");
    printf("The string is :%s",strrev(str1));
}