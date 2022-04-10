# include<stdio.h>
void main(){
    int a=10;
    int *p;
    p=&a;
    printf("before decrement of the address %u\n",p); 
    p=p-1;
    printf("after decriment of the adderss %u",p);
}  