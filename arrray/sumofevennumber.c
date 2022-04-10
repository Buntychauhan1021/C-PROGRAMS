#include <stdio.h>
int sumeven(int arr[], int size);
void main()
{
    int arr[100], n, i, k;
    printf("enter the size of array\n");
    scanf("%d", &n);
    printf("enter the element of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    k = sumeven(arr, n);
    printf("the sum is = %d", k);
}
int sumeven(int arr[], int size)
{
    int i;
    int sum = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
        }
    }
    return sum;
}