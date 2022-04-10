# include<stdio.h>
int f1();
int main()
{
    f1();
    f1();
}
int f1(){
   static int a=10;
    a++;
    printf("%d\n",a);
}