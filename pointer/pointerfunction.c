# include <stdio.h>
int sum(int a, int b)
{
     int c;
     c = a + b;
     return c;
}
void main()    
{
     int (*ptr)(int, int); //declaring a function pointer
     ptr = sum;  //creating a function pointer 
     //ptr=&sum is also right
     printf("the sum is %d\n",sum(9,9));
     int d=(*ptr)(7,9); //deferencing a function pointer this is explicit way to present the pointer
     // int d=ptr(7,9);//this is implicit way to present pointer
     printf("the sum is %d",d);
}
// # include<stdio.h>
// void main(){
//      int a[5]={3,4,3,4,2};
//      int *p[5],i;
//      for ( i = 0; i < 5; i++)
//      {
//           p[i]=&a[i];
//      }
//      for ( i = 0; i < 5; i++)
//      {
//           printf("%d\t",*p[i]);
//      }
     
// }