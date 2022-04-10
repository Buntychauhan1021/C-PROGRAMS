#include <stdio.h>
int max(int arr[], int size);
void main()
{
    int arr[10], n, i, k;
    printf("enter the array size\n");
    scanf("%d", &n);
    printf("enter the number\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    k = max(arr, n);
    printf("the largest number is %d", k);
}
int max(int arr[], int size)
{
    int i, max = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}