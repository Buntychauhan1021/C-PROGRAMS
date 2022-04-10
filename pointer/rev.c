# include<stdio.h>
void main(){
    int arr[100],i,n;
    int *p;
    p=arr;
    printf("enter the number\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
   {
        printf("%d\t",*(p+i));
    }
    
    
}