# include<stdio.h>
void sum(int arr[],int n);
void main(){
    int arr[100],n,i;
     printf("enter the size of array\n");
     scanf("%d",&n);
    printf("before addition of array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sum(arr,n);
}
   void sum(int arr[],int n)
   {
       int i,sum=0;
    for ( i =0; i < n; i++)
    {
        sum=sum+arr[i];
    }
      
      printf("the sum : = %d",sum);
    
}

