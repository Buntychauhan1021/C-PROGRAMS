# include<stdio.h>
int fun(int n);
void main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("%d",fun(num));
}
int fun(int n)
{  
    int count=0;
    while (n>0)
    {
    n=n/10;
    count++;
    }
    return count;
    
}