# include<stdio.h>
void main(){
    int arr[100],n,i,sum=0;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the number\n");
    for ( i = 1; i <= n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 1; i <= n; i++)
    {
        if (arr[i]%2!=0)
        {
         sum=sum+arr[i];
        }
        
    }
    printf("the sum of odd number \n%d",sum);
    
    
}