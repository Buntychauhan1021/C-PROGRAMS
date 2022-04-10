# include<stdio.h>
# include<conio.h>
int reverse(int num);
void main(){
    int n,k;
    printf("enter the numner");
    scanf("%d",&n);
    k=reverse(n);
    printf("%d",k);
}
int reverse(int num){
   int sum=0,r;
   while (num>0)
   {
       r=num%10;
       sum=sum*10+r;
       num=num/10;
   }
   return sum;
   
}