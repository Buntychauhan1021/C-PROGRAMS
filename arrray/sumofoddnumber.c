# include<stdio.h>
void oddsum(int arr[],int size);
int main(){
    int arr[100],i,n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the element of array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
  oddsum(arr,n);
    
}
void oddsum(int arr[],int size)
{
    int i,sum=0;
    for ( i = 0; i < size; i++)
    {
         if (arr[i]%2!=0)
         {
            sum=sum+arr[i];
         }
         
        
    }
    printf(" the sum is =%d",sum);
}