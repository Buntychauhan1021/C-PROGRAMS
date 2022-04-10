# include<stdio.h>
int even();
int odd();
int n=1;
int main(){
    odd();
}
int odd(){
    if (n<=10)
    {
        printf("%d\t",n+1);
        n++;
        even();
    }
    
}
int even(){

    if (n<=10)
    {
        printf("%d\t",n-1);
        n++;
        odd();
    }
}