# include<stdio.h>
# include<conio.h>
int main(){
    int n,prime=1;
    printf("Enter the number\n");
    scanf("%d\n",&n);

    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    } 
    if(prime==0 && n!=2){
        printf("%d this is not a prime number",n);
    }
    else
    {
        printf("%d This is a prime number",n);
    }
    return 0;

}