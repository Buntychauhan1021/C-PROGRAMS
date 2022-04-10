# include<stdio.h>
int main(){
    char str[100];
    printf("enter the string\n");
    fgets(str,10,stdin);
    printf("%s",str);
}