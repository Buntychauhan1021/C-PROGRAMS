# include<stdio.h>
void inputmatrix(int arr[100][100],int r,int c);
void outputmatrix(int arr[100][100],int r,int c);
void multiplymatrix(int arr1[100][100],int arr2[100][100],int arr3[100][100],int r,int c,int r1,int c1);
void summatrix(int arr1[100][100],int arr2[100][100],int arr3[100][100],int r,int c);
void main(){
    int n,r,c,r1,c1,arr1[100][100],arr2[100][100],arr3[100][100];
    printf("enter the row and column for first row\n");
    scanf("%d%d",&r,&c);
    printf("enter the row and column for second row\n");
    scanf("%d%d",&r1,&c1);
    printf("enter the first matrix\n");
    inputmatrix(arr1,r,c);
    printf("enter the second matrix\n");
    inputmatrix(arr2,r1,c1);
    printf("first matrix\n");
     outputmatrix(arr1,r,c);
     printf("second matrix\n");
    outputmatrix(arr2,r1,c1);
    printf("enter choice\n1.multiplication matrix\n2.sum matrix\n");
    scanf("%d",&n);
    switch (n)
    {
     case 1:
        printf("multiplication\n");
    multiplymatrix(arr1,arr2,arr3,r,c,r1,c1);
        break;
     
     case 2:
      printf("sum is\n");
     summatrix(arr1,arr2,arr3,r,c);
     break;
    
    default:
    printf("enter valid choice");
        
    }
    
    
}
void inputmatrix(int arr[100][100],int r,int c)
{   int i,j;

    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
        }
    }
void outputmatrix(int arr[100][100],int r,int c){
    int i,j;
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    }
void multiplymatrix(int arr1[100][100],int arr2[100][100],int arr3[100][100],int r,int c,int r1,int c1)
{
int i,j,k;
      for ( i = 0; i < r; i++)
      {
          for ( j = 0; j < c1; j++)
          {
              arr3[i][j]=0;
              for ( k = 0; k < c; k++)
              {
                  arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
                  }
               printf("%d\t",arr3[i][j]);
             }
           printf("\n");
          }
      }

      void summatrix(int arr1[100][100],int arr2[100][100],int arr3[100][100],int r,int c)
      {

       int i,j;
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
             printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
    }
