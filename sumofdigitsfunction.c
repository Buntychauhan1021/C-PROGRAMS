# include<stdio.h>
# include<conio.h>
int sum(int num);
void main(){
    int n,k;
    printf("enter the number");
    scanf("%d",&n);
    k=sum(n);
    printf("the sum is %d ",k);
}
int sum(int num){
    int  r,sum=0;
    while (num>0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    return sum;
    
}