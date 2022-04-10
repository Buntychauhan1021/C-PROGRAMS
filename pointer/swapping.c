# include<stdio.h>
void swap(int *a,int *b);
void main(){
    int a,b;
    printf("enter the number\n");
    scanf("%d%d",&a,&b);
    printf("before swapping the number is %d\t%d\n",a,b);
    swap(&a,&b);
     printf("after swapping the number is %d\t %d",a,b);
}
void swap(int *a,int *b)
{
    int temp;
    // *a=*a+*b;
    // *b=*a-*b;
    // *a=*a-*b;
    temp=*a;
    *a=*b;
    *b=temp;
   
}