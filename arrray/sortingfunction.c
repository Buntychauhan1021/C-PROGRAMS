# include<stdio.h>
void sort(int arr[],int size);
void main(){
    int arr[5]={2,3,9,7,4};
   // printf("Enter the number\n");
    //for (int i = 0; i < 5; i++)
    //{
     //   scanf("%d",&arr);
    //}
    sort(arr,5);
   // printf("the sorting array is : %d",k);
    
}
void sort(int arr[],int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
          }
        }
        
    }
    printf("sorting");
    for (int i = 0; i < size; i++)
    {
        printf(" %d",arr[i]);
    }
    
    
}