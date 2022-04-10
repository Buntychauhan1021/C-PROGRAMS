// # include<stdio.h>
// # include<string.h>
// void main(){
//     char str1[100],str2[100];
//     int i ,cmp=0;
//     printf("enter the string :");
//     gets(str1);
//     printf("enter the second string :");
//     gets(str2);
//     while (str1[i]!='\0' && str2[i]!='\0')
//     {
//         if (str1[i]!=str2[i])
//         {
//             cmp=1;
//             break;
//         }
//         i++;
        
//     }
//     if (cmp==0&&str1[i]=='\0' && str2[i]=='\0')
//     {
//         printf("string equal\n");
//     }
//     else
//     {
//         printf(" not string\n");
//     }
    
    
// }
# include<stdio.h>
# include<string.h>
void main(){
    char str1[100],str2[100];
    int i=0,cmp=0;
    printf("enter first string\n");
    gets(str1);
    printf("enter second string\n");
    gets(str2);
    while (str1[i]!='\0' && str2[i]!='\0' )
    {
       if (str1[i] != str2[i])
       {
             cmp=1;
             break;
       }
        i++;
    }
    if (cmp==0&&str1[i]=='\0' && str2[i]=='\0')
    {
        printf("equal");
    }
    else 
    {
        printf("not equal");
    }
    }