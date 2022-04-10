#include <stdio.h>
int factorial(int x);
void main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);

    printf("The factorial of  %d id %d ", n, factorial(n));
}
int factorial(int x)
{
    int sum=0,n;
    while (x>0)
    {
        n=x%10;
        sum=sum+n;
        x=x/10;

    }
    return sum;
    
   
}