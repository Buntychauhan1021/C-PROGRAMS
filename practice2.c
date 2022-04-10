# include<stdio.h>
void sumavg(int i,int j, int *sum, float *avg)

{
    *sum = i+j;
    *avg = (float)(*sum)/2;
}
int main(){
int a,b,sum;
float avg;
printf("Enter the first value \n");
scanf("%d",&a);
printf("Enter the second value\n");
scanf("%d",&b);
sumavg(a, b, &sum, &avg);
printf("The sum is %d\n",sum);
printf("The avg is %.1f\n",avg);
return 0;

    }

     
