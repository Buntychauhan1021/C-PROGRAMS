# include<stdio.h>
int main(){
    int a=10,b=20;
    int *p1=&a;
    int *p2=&b;
    printf("before swapping %d   %d\n",*p1,*p2);
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("before swapping %d   %d",*p1,*p2);



}