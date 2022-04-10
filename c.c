# include<stdio.h>
# include<ctype.h>
int main(){
    char ch;
    printf("Enter any character\n");
    scanf("%c",&ch);
    if(isupper(ch))
    {
        printf("' %c 'uppercase alphabet \n",ch);
    }
    else if(islower(ch))
    {
        printf("' %c 'lowercase alphabet\n",ch);
    }
    else
    {
        printf("' %c 'special character\n",ch);
    }
    return 0;
}