# include<stdio.h>
# include<conio.h>
int main(){
    int prime =1,n;
    printf("enter the number");
    scanf("%d",&n);
    for (int i = 2; i <= n-1; i++)
    {
    if (n%i==0)
    {
        prime=0;
        break;
    }
    
    }
    if (prime==0)
    {
        printf("this is not prime");
    }
    else
    {
        printf("this is prime");
    }
    
    

}