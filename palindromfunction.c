# include<stdio.h>
# include<conio.h>
int palindrom(int num);
void main(){
    int n,k;
    printf("enter the number");
    scanf("%d",&n);
    k=palindrom(n);
    printf("%d",k);

}
int palindrom(int num){
    int sum=0,temp,r;
    temp=num;
    while (num>0)
    {
        r=num%10;
        sum=sum*10+r;
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