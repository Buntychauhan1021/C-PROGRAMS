#include<stdio.h>
void main()
{
    int i,sum=0,a[50],n;
    printf("enter the array");
    scanf("%d",&n);
     for ( i = 0; i < n; i++)

    
     {
     
         
         scanf("%d",&a[i]);
     }
     for ( i = 0; i < n; i++)
     {
         /* code */
         sum=sum+a[i];
     }
    
     printf("array is %d",sum);
}