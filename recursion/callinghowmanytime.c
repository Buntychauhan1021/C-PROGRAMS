# include<stdio.h>
int fun(int x);
int main(){
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    
    printf("%d\t",fun(n));
    
}
int fun(int x)
{
    if (x==1)
        return 1;
    else
   
    return 1+fun(x-1);
     
   
    
}