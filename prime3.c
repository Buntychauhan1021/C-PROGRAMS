#include<stdio.h>
int main(){
    int prime=1,n;
    printf("Enter the number");
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
        if(n%i==0)
        {
    prime =0;
    break;
    }
    }
    if (prime==0 && n!=2)
    {
        printf("this is not prime\n");
    }
    else{
        printf("yes this is prime\n");
    }
    return 0;
}