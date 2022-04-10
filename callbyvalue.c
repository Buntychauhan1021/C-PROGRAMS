# include<stdio.h>
int sum(int i,int j);
int main(){
    int a,b,c;
    printf("Enter the value of a = \n");
    scanf("%d",&a);
    printf("Enter the value of b = \n");
    scanf("%d",&b);
    c=sum(a,b);
    printf("The sum of a and b is %d",c);
return 0;

}
int sum(int i,int j){
    return i+j;
}