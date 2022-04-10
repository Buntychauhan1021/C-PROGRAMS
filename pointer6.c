# include<stdio.h>
int main(){
    int a,b,c;
    int *p=&a,*q=&b,*r=&c;
    printf("Enter the first number:");
    scanf("%d",&*p);
    printf("enter the second number:");
    scanf("%d",&*q);
    //printf("Enter theird number:");
    //scanf("%d",*r);
    *r=*p+*q;
    printf("The sum is %d",*r);
    return 0;
}