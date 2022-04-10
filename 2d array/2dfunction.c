# include<stdio.h>
void inparr(int a[100][100],int r,int c);
void outarr(int a[100][100],int r,int c);
void  main(){
          int r,c,a[100][100];
          printf("enter the row\n");
          scanf("%d",&r);
          printf("enter the column\n");
          scanf("%d",&c);
          inparr(a,r,c);
          outarr(a,r,c);
          
}
void inparr(int a[100][100],int r,int c)
{
    int i,j;
    printf("enter the number\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d\t",&a[i][j]);
        }
        printf("\n");
        
    }
    
}
void outarr(int a[100][100],int r,int c)
{
    int i,j,sum=0;
    printf("the sum is \n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            sum=sum+a[i][j];
        }
        
    }
    printf("%d",sum);
    
}