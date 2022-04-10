#include <stdio.h>
void main()
{
    int arr[100], n, i, pos;
    printf("enter the size of array\n");
    scanf("%d", &n);
    printf("enter the number before deletion\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position which you wnat to delete :\n");
    scanf("%d", &pos);
    for (i = pos - 1; i <= n; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("after the deletion array\n");
    for (i = 0; i < n-1 ; i++)
    {
        printf("%d\n", arr[i]);
    }
}

