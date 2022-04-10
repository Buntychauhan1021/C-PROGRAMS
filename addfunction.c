# include<stdio.h>
int add( int x, int y);
void main(){
 int a,b,c;
 printf("Enter the first number\n");
 scanf("%d",&a);
 printf("enter second number\n");
 scanf("%d",&b);
 c=add(a,b);
 printf("the sum is %d",c);
}
int add(int x ,int y)
{
    int z;
    z=x+y;
    return(z);
}