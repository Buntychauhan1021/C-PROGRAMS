# include<stdio.h>
void insert(int arr[],int size,int pos,int element);
void main(){
    int i,n,arr[100],pos=3,element=40;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the number\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    insert(arr,n,3,40);
    
}
void insert(int arr[],int size,int pos,int element)
{
    int i;
    for ( i = size-1; i >=pos ; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[i+1]=element;
    size++;
    printf("the new array\n");
    for ( i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    
}
