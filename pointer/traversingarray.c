# include<stdio.h>
# include<conio.h>

void main()
{
       int arr[100],i,n;
       int *p=arr;
       printf("enter the array size\n");
       scanf("%d",&n);
       printf("enter the number of array\n");
       for ( i = 0; i < n; i++)     
{
       scanf("%d",&arr[i]);  //arr+i is also right
}

       printf("after traversing array\n");
       for ( i = 0; i < n; i++)
{
       printf("%d\t",*(p+i));
}
}