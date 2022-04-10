# include<stdio.h>

void mian(){
    int a,b=1,c=0,no,i;
    printf("enter the number");
    scanf("%d",&no);
    for ( i = 1; i <= no; i++)
    {
     printf("%d",c);
      a=b;
      b=c;
      c=a+b;
    }
}