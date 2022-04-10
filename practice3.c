# include<stdio.h>
int sumavg(int a,int b,float *avg,int *sum){
    *sum=a+b;
    *avg=(float)*sum/2;

}
int main(){
    int i,j,sum;
    float avg;
    printf("Enter first number\n");
    scanf("%d",&i);
    printf("Enter second number\n");
    scanf("%d",&j);
    sumavg(i,j,&avg,&sum);
    printf("sum is %d\n",sum);
    printf("avg is %.1f",avg);
    return 0;


}