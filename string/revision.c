# include<stdio.h>
# include<string.h>
int main(){
    char str[100];
    int i;
    printf("enter the string\n");
    gets(str);
    int len=strlen(str);
    for ( i=len-1; i>=0; i--)
    {
        printf("%c",str[i]);
    }
    
}