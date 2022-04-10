# include<stdio.h>
int fun(int n);
void main(){
    int num,k;
    printf("enter the numnber");
    scanf("%d",&num);
    k=fun(num);
    printf("the count is %d ",k);
}
int fun(int n){
    int count=0;
    while (n>0)
    {
       
     count++;
      n=n/10;
     
    }
    return count;
    
}