# include<stdio.h>
# include<conio.h>
# include<string.h>
int main(){
    char str[100];
    int len,i;
    printf("enter the string\n");
    scanf("%s",&str);
    len=strlen(str);
    for ( i = len-1; i >=0;i--)
    {
        printf("%c",str[i]);
    }
    
}
