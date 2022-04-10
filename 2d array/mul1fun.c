#include<stdio.h>
#include<conio.h>
void inputmat(int [10][10],int [10][10],int,int,int,int);
void outputmat(int [10][10],int [10][10],int,int,int,int);
void multiplymat(int [10][10],int [10][10],int [10][10],int,int,int,int);
void main()
{
    int a[10][10],b[10][10],m,n,m1,n1,c[10][10];
    printf("Enter no. of rows for first & second matrix:");
    scanf("%d%d",&m,&m1);
    printf("\nEnter no. of columns for first & second matrix:");
    scanf("%d%d",&n,&n1);
    inputmat(a,b,m,n,m1,n1);
    outputmat(a,b,m,n,m1,n1);
    multiplymat(a,b,c,m,n,m1,n1);
    }
    void inputmat(int a[10][10],int b[10][10],int m,int n,int m1,int n1)
    {
        int i,j;
        printf("enter the fisrt matrix\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }

        }
        printf("enter the second matrix\n");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
    }
    void outputmat(int a[10][10],int b[10][10],int m,int n,int m1,int n1)
    {
        int i,j;
        printf("\nFirst Matrix:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("\nsecond matrix:\n");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                printf("%d\t",b[i][j]);
        
            }
            printf("\n");
        }
        
    }
void multiplymat(int a[10][10],int b[10][10],int c[10][10],int m,int n,int m1,int n1)
{
    int i,j,k;
    printf("multiplication\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n1;j++)
        {
            c[i][j]=0;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n1;j++)
        {
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}