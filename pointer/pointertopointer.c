# include<stdio.h>
void main(){
    int a=10;
    int *p,**pp;
    p=&a;
    pp=&p;
    printf("value of p %d\n",*p);
    printf("value of pp %d\n",**pp);
    printf("the address of a %u\n",&a);
    printf("the address of p %u\n",p);
    printf("the address of p %d\n",&p);
    printf("the address of pp %u",pp);

}