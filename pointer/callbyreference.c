# include<stdio.h>
int fun( int *);
void main()
{
    int a=10;
    printf("%d\n",a);
    fun(&a); 
    printf("%d",a);
}
int fun(int *p)
{
    *p+=10;
}