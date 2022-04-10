# include<stdio.h>
# include<string.h>
int main(){
    char str[20],str1[20];
    printf("enter the string\n");
    gets(str);
    strcpy(str1,str);
    printf("after copy string is : %s",str1);
}