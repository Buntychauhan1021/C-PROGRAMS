# include<stdio.h>
int add( int * ,int *);
void main(){
      int a,b,c;
      printf("enter the number\n");
      scanf("%d%d",&a,&b);
     c= add(&a,&b);
      printf("the sum is %d\n",c);
}
int add(int *a,int *b)
{
    int c;
    c=*a+*b;
    return c;
}

