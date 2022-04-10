# include<stdio.h>
int add(int a ,int b);
void main(){
    int x,y,z;
    printf("enter the number");
    scanf("%d%d",&x,&z);
    y=add(x,z);
    printf("%d",y);
}
int add(int a,int b){
    int c;
    c=a+b;
    return c;
}