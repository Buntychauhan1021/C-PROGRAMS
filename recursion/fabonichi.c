# include<stdio.h>
int fun(int n);
void main(){
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    
    printf("the series is %d",fun(n));
}
int fun(int n){
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {    
        return 1;
    }
    else 
    {
        return fun(n-1)+fun(n-2);
    }
    
}