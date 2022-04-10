# include<stdio.h>
# include<string.h>
int main(){
    char str[100],str1[100];
    printf("enter the strin\n");
    gets(str);
    printf("enter the second string\n");
    gets(str1);
    if(strcmp(str,str1)==0)
    {
        printf("string is equal");
    }
    else
    {
        printf("string is not equal");
    }
    
}