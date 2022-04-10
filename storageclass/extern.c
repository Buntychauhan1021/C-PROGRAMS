# include<stdio.h>
void f1(),f2();

int main(){
    extern int a;
   printf("%d\n",a);
    f1();
    f1();
    f1();
    f2();
}
int a=5;
void f1(){
    a=a+10;
    printf("%d\n",a);
}
void f2(){
    a=a+10;
    printf("%d",a);
}

