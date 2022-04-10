# include<stdio.h>
# include<conio.h>
int main(){
    int temp,n,sum=0,r;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if (temp==sum)
    {
        printf("yes this is armstrong");
    }
    else
    {
        printf("this is not a palindrom");
    }
    
}