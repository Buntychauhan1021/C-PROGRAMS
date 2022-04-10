# include<stdio.h>
void reverse(int arr[],int size);
void main(){
    int arr[100],i,n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the array element\n");
    for ( i = 0; i < n; i++)
    {
    scanf("%d",&arr[i]);
    }
    reverse(arr,n);
    
}
void reverse(int arr[],int size)
{
    int i,r,temp,j;
    for ( i = 0; i < size; i++)
    {
         for ( j = i+1; j < size; j++){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
         }
    }
    printf("reverse array\n");
    for ( i = 0; i < size; i++)
    {printf("%d\t",arr[i]);}
    

}