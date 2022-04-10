# include<stdio.h>
# include<conio.h>
int main(){
    int r,sum=0,n,temp;

    printf("Enter the number ");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
       r=n%10;
       sum =sum*10+r;
       n=n/10;
    }
    if (temp==sum)
    {
        printf("yes this is palindrom");
    }
    else
    {
        printf("this is not a palindrom");
    }
    
}