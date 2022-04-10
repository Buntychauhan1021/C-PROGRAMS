# include<stdio.h>
int max(int arr[],int size);
void main()
{
  int arr[20],k;
  printf("enter the number\n");
  for (int i = 0; i < 5; i++)
  {
     scanf("%d",&arr[i]);
  }
  k=max(arr,5);
  printf("The max value is : %d",k);

}
int max(int arr[],int size)
{
    int max=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max)
        {
               max=arr[i];
        }
    }
    return max;
}