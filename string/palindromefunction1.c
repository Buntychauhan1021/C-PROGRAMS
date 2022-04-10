# include<stdio.h>
# include<string.h>
 void palin(char str[]);
void main(){
    char str[100];
    printf("enter the string \n");
    gets(str);
    palin(str);
    }
    void palin(char str[]){
    int i=0;
    int k;
    k=strlen(str)-1;
    while (k>i)
    {
        if (str[i++] != str[k--])
        {
            printf("this is not a palindrom\n");
            break;
        }
        else
        {
            printf("yes");
            break;
        }
        
    }
    
    }