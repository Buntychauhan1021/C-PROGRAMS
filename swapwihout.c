# include<stdio.h>

int maim(){
   int a=10,b=20,c;
   printf("before swaping %d  %d",a,b);
//    a=a*b;
//    b=a/b;
//    a=a/b;
c=a;
a=b;
b=c;
   printf("after swaping %d  %d",a,b);
   return 0;

}
