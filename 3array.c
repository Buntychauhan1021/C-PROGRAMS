#include <stdio.h>
int returnmax(int array[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 50, 6, 7, 8};
    int max = returnmax(arr, 8);
    printf("The maximam number in this array = %d ", max);
    return 0;
}