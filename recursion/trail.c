# include<stdio.h>
int fun(int x);
void main(){//trail means that nothing store in stake
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    fun(n);
}
int fun(int x)
{
    if (x==0)
    {
        return;
    }
    else
    {
        printf("%d\t",x);
        fun(x-1);
    }
}