# include<stdio.h>
# include<string.h>
void main(){
    char str1[20];
    printf("enter the string\n");
    //scanf("%s",str1);
    gets(str1);
  //  printf("the string is %s",strlwr(str1));
     printf("the string is");
     puts(strlwr(str1));
}