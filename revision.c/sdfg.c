# include<stdio.h>
int main()
{
    int n=121,r,sum=0;
    while (n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    n=sum;
    while (n>0)
    {
        r=n%10;
    
    switch (r)
    {
    case 1:
        printf("one\t");
        break;
    case 2:
       printf("two\t");
       break;
    
    default:
        break;
    }
    n=n/10;
    }
    

    
}