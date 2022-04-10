#include <stdio.h>
void main()
{
    char str[50];
int i,j,len,len2;
printf("Enter a string:\n");
gets(str);
//fgets(str,20,stdin);
for(len=0;str[len]!='\0';len++)
len2=0;
for(i=0;i<(len-len2);)
{
    if(str[i]==str[i+1])
    {
        for(j=i;j<(len-len2);j++)
        str[j]=str[j+1];
        len2++;
    }
    else
    {
        i++;
    }
    }
    printf("\nString after removing characters:%s\n",str);
    }