# include<stdio.h>
# include<string.h>
void main()
    {
    char str[100];
    int count=0,i;
    printf("enter string\n");
    gets(str);
    for ( i=0; str[i] != '\0'; i++)
    {
        count++;
    }
      printf("the lemgth of string is %d",count);
    }