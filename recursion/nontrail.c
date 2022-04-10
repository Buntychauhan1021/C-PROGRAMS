# include<stdio.h>
void fun(int x);
void main(){
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    fun(n);
}
void fun(int x)
{
    if (x==0)
    {
        return;
    }
    else
    {
        fun(x-1);
        printf("%d",x);
    }
    
}                                      