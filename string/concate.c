# include<stdio.h>
# include<string.h>
void main(){
     char str1[100],str2[100];
     int i=0,j=0;
     printf("enter first string\n");
     gets(str1);
     printf("enter second string\n"); 
     gets(str2);
     while (str1[i]!='\0')
           {
            i++;
           }
     while (str2[j]!='\0')
         {
         str1[i]=str2[j];
         i++;
         j++;
         }
         str1[i]='\0';
     printf("concate string\n%s",str1);  
     }
     