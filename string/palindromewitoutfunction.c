#include <stdio.h>
#include <string.h>
void main()
{
  char str[100];
  printf("enter the string\n");
  
  gets(str);
  int l = 0;
  int h = strlen(str) - 1;
  while (h > l)
  {
    if (str[l++] != str[h--])
    {
      printf("this string is not a palindrme\n");
      break;
    }
    else
    {
      printf("this string is palindrome\n");
      break;
    }
  }
}