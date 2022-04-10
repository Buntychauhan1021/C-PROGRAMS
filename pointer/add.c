# include<stdio.h>
# include<string.h>
void main(){
    int *a,*b,*c;
    int p,q,r;
     a=&p;
     b=&q;
     c=&r;
    printf("enter the number\n");

    scanf("%d",&p);

    printf("enter the second number\n");

    scanf("%d",&q);

    *c = *a + *b;
    printf("add = %d\n",*c);
  
}