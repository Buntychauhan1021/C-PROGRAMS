# include<stdio.h>
void main(){
    int arr[100],n,i,sum=0,prod=1;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the number\n");
    for ( i = 0; i < n; i++)
    {
     scanf("%d",&arr[i]);

    }
    for ( i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            sum=sum+arr[i];
        }
        else
        {
            prod=prod*arr[i];  
        }
        
    }
    printf("the sum is = %d\n  ",sum);
    printf(" the product is %d \n",prod);
    

    
}