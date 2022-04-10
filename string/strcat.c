# include<stdio.h>
# include<string.h>
int main(){
    char str[100],str1[100];
    printf("enter first string\n");
    gets(str);
    printf("enter second string\n");
    gets(str1);
    strcat(str,str1);
    printf("%s",str);

}