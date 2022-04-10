# include<stdio.h>
# include<conio.h>
int add();
int main(){
    int s;
   s= add();
   printf("%d",s);
}
int add(){

    int a,b,c;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}