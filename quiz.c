# include<stdio.h>
int main(){
    int i=0,n;
    printf("Enter the number \n");
    scanf("%d",&n);
    do
    {
        printf("%d x %d = %d\n",i,n,i*n);
        i++;
    } while (i<=10);
    return 0;
}