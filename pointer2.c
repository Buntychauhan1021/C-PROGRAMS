# include<stdio.h>
int main(){
    int a=10,b=18,c=1;
    // int *p,*q,*r;
   int *p=&a;
    int *q=&b;
    int *r=&c;
    printf("The sum is three number%d",*p+*q+*r);
    return 0;

}