# include<stdio.h>
void main()
 {
     int *a,n,i,sum=0;
     a=&n;
     printf("enter the number\n");
     scanf("%d",a);
     for ( i = 1; i <= 10; i++)
     {
        sum=sum+*a;
        printf("%d  x   %d  =  %d\n",i,*a,sum);
        //printf("%d",sizeof(i));
              }
    
}