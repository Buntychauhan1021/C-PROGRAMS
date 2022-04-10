# include<stdio.h>
int main(){
    int factorial=1,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        factorial=factorial*i;

    }
    printf("The factorial is = %d",factorial);
    return 0;
    
}