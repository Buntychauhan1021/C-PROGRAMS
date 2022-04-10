# include<stdio.h>
# include<string.h>
void main(){
    char str1[100];
    int i ,count=0;
     printf("enter any string\n");
     gets(str1);
     for ( i = 0; str1[i] !='\0'; i++)
     {
         if (str1[i]>=48 && str1[i]<=57)
         {
             count++;
         }
         
     }
     printf("the number of in this string is : %d",count);
     
}