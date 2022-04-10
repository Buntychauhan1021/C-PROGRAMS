# include<stdio.h>
void main(){
    int arr[100],n,i,index=3,element=90;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("ENter the element\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = n-1; i >=index ; i--)
    {
       arr[i+1]=arr[i];
    }
    arr[index]=element;
    n++;
    printf("new array\n");
    for ( i = 0; i <n; i++)
    {
    printf("%d\t",arr[i]);
    }
    
    

    
}