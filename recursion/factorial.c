# include<stdio.h>
int fun(int x);
void main(){
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("the factorial of %d is %d",n,fun(n));
}
int fun(int x)
{
    if (x==1)
    {
        return 1;
    }
    else
    {
        return x*fun(x-1);
    }
    
    
}
