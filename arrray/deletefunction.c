# include<stdio.h>
int deleteelement(int arr[],int size,int pos,int capacity);
void main(){
    int arr[100],n,i,pos;
    printf("enter the size of array\n");
    scanf("%d",&n);
     printf("enetr the position which you want to delete\n");
    scanf("%d",&pos);
   printf("enter the number before deletion\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
   
     deleteelement(arr,n,pos,100);
    
}
int deleteelement(int arr[],int size,int pos,int capacity)
{
    int i;
    if(size>capacity)
    {
        return -1;
    }
    for ( i = pos-1; i < size; i++)
    {
        arr[i]=arr[i+1];
    }
   
   
    printf("new\n");
    for ( i = 0; i < size-1; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 1;
    
}