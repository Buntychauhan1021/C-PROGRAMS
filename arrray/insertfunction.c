#include<stdio.h>
int insertelement (int arr[], int size ,int index, int element,int capacity);
void main(){
    int arr[100],n,i,index =3,element=23,capacity;
    printf("Enter the size of ayyar\n");
    scanf("%d",&n);
    printf("Enter the number\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    insertelement (arr,n,3,23,100);

    
}
int insertelement (int arr[], int size ,int index, int element,int capacity)
{
    int i;
    if(size>=capacity)
      {
          return -1;
      }
    for ( i = size-1; i >= index; i--)
    {
        arr[i+1]=arr[i];
      }
      arr[index]=element;
      size++;
      printf("new index\n");
      for ( i = 0; i < size; i++)
      {
          printf("%d\t",arr[i]);
      }
      
    return 1;
}