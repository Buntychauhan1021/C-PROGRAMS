# include<stdio.h>
int fun(int x);
int main(){
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    fun(n);
}
    
int fun(int x)
{
    if (x==0)
        return;
    else
     fun(x-1);
    printf("%d\t",x);
}