# include<stdio.h>
# include<conio.h>
int armstrong(int num);
int main(){
 int n,k;
 printf("Enter the number");
 scanf("%d",&n);
k= armstrong(n);
printf("%d",k);
return 0;
}
int armstrong(int num){
    int temp,r,sum=0;
    temp=num;
    while (num>0)
    {
        r=num%10;
        sum=sum+r*r*r;
        num=num/10;

    }
    if (temp==sum)
    {
      return 1;
    }
    else
    {
        return 0;
    }
    
    
}