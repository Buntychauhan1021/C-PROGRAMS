# include<stdio.h>
float average(int a,int b,int c);
int main(){
    int n,m,j;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the value of m\n");
    scanf("%d",&m);
    printf("Enter the value of j\n");
    scanf("%d",&j);
    float a=average(n,m,j);
    printf("The average of three number = %f",a);
    return 0;
}
float average(int a,int b,int c){
     float result;
     result=(float)(a+b+c)/3;
     return result;
}