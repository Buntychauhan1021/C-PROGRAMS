# include<stdio.h>
void main(){
    int a=10,b=20;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("before swaping %d   %d\n",*p1,*p2);
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("after swaping %d    %d",*p1,*p2);
}   