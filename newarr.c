#include <stdio.h>

int main()
{
  int X[10];
  int i,num,count=0;
  for(i=0;i<10;i++)
  {
      scanf("%d",&X[i]);
  }
printf("enter the number u want to search\n");
scanf("%d",&num);
for(i=0;i<10;i++)
{
    if(X[i]==num)
    {
        count++;
        
    }
}
printf("%d\n",count);
    return 0;
}