# include<stdio.h>
void main(){
    int i=10;
    int *p;
    p=&i;
    printf("print the address of i before increment %u\n",p);
    p=p+1;
    printf("print the addredd of i after increment %u",p);
}