#include <stdio.h>
#include <conio.h>
int main()
{
    for (int i = 0; i <= 8; i++)
    {
        for (int j = 0; j <= 8; j++)
        {
            if ((i + j) >= 8){

                printf("*");
            }
            else
            {
              printf(" ");
        }
        }
        printf("\n");
    }
}