#include <stdio.h>
int main()
{
  //Q3- Write a program to determine whether a number is divisivle by 97 or not
  int num;
  printf("Enter the number\n");
  scanf("%d", &num);
  printf("Divisibility test return:%d\n", num % 97);
  //Q4- step by step evalution of 3*x/y-z+k
  int x = 2, y = 3, z = 4, k = 1;
  int result = 3 * (x / y) - z + k;
  printf("The value of result is %d", result);
  return 0;
}