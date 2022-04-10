# include<stdio.h>
int factorial(int fact);
void main(){
    int n,k;
    printf("enter the number \n");
    scanf("%d",&n);
   k= factorial(n);
   printf("fact is : %d ",k);

}
int factorial(int fact){
    int m=1;
    for (int i = 1; i <= fact; i++)
    {
     m=m*i;
    }
    return m;
    
}