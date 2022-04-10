# include<stdio.h>
int swap(int *a,int *b);
void main(){
    int i=33,j=22;
  printf("before swaping %d  %d\n",i,j);
 
  swap(&i,&j);
  printf("after swaping %d   %d",i,j);

}
int swap(int *a,int *b)
{
    int u;
    u=*a;
    *a=*b;
    *b=u;

}