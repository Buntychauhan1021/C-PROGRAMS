# include<stdio.h>
# include<string.h>
int main(){
    char str[100];
    printf("enter string\n");
    gets(str);
    printf("the lworstring is %s\n",strlwr(str));
    printf("the lworstring is %s",strupr(str));
}