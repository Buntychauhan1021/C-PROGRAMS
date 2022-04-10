# include<stdio.h>
# include<string.h>
void main(){
    char str[100];
    int i,vowel=0,constant=0;
    printf("enter any string \n");
    gets(str);
    for ( i = 0; str[i] != '\0'; i++)
    {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowel++;
        }
        else
        {
            constant++;
        }
        
    }
    printf("vowel is = %d and constant is = %d",vowel,constant);
}
