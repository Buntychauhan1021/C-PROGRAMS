# include<stdio.h>
# include<string.h>
void main(){
    char str1[20];
    printf("enter the string");
    fgets(str1,20,stdin);
    printf("string is %s",str1);
}