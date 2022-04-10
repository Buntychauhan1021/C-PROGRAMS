# include<stdio.h>
# include<conio.h>
# include<string.h>
void main(){
    char str[100];
    int i,count=0;
    printf("enter any string\n");
    gets(str);
    for ( i = 0; str[i] != '\0'; i++)
    {
        if (str[i]==' ')
        {
            count++;
        }
        
    }
    printf("the number of space in string %d\n",count);
    
}