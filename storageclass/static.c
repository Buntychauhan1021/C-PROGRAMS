# include<stdio.h>
void f1(),f2();
int main(){
    f1();
    f1();
    f2();
    f2();
}
void f1()
{ 
  static int a=10;
  a++;
  printf("%d\n",a);
}
void f2()
{ 
 static int a=10;
  a++;
  printf("%d\n",a);
}