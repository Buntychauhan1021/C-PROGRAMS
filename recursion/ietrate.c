# include<stdio.h>
void fun(int x);
void main(){
int n;
printf("enter rhe number\n");
scanf("%d",&n);
fun(n);
}
void fun(int x)
{
    int fact=1;
    while (x!=0)
    {
        fact=fact*x;
        x--;
    }
    printf("the fact is : %d ",fact);
    
    
}