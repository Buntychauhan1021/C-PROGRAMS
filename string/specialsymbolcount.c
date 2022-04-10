# include<stdio.h>
# include<string.h>
void main(){
    char str1[100];
    int i,count=0;
    printf("enter any string\n");
    gets(str1);
    for ( i = 0; str1[i]!=0; i++)
    {
        if (str1[i]>=47&& str1[i]<=58)
        {
        }
          else if (str1[i]>=65 && str1[i]<=90 || str1[i]>=97&& str1[i]<=122 )
          {
          }
        else
        {
            count ++;
        }
        }
        printf("total digits %d",count);
    
}