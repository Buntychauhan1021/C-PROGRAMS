# include<stdio.h>
void inp1(int arr[100][100],int r,int c);
void disply(int arr[100][100],int r,int c);
void out(int arr1[100][100],int arr2[100][100],int r,int c,int r1,int c1);
void main(){
    int r,c,r1,c1,arr1[100][100],arr2[100][100];
    printf("enter the first matrix row size\n");
    scanf("%d",&r);
    printf("enter the first matrix column size\n ");
    scanf("%d",&c);
    printf("enter the second matrix row size\n"); 
    scanf("%d",&r1);
    printf("enter the second matrix column size\n");
    scanf("%d",&c1);
    printf("this is first matrix\n");
    inp1(arr1,r,c);
    printf("enter the second matrix\n");
    inp1(arr2,r1,c1);
    printf("this is first matrix\n");
    disply(arr1,r,c);
    printf("enter the second matrix\n");
    disply(arr2,r1,c1);
    printf("the sum is :\n ");
    out(arr1,arr2,r,c,r1,c1);

}
void inp1(int arr[100][100],int r,int c)
{   
    int i,j;
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
         
    }
    
}
void disply(int arr[100][100],int r,int c)
{  
    int i,j;
    for(i=0;i<r;i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}


void out(int arr1[100][100],int arr2[100][100],int r,int c,int r1,int c1)
{
       int i,j,arr[100][100];
       for ( i = 0; i < r; i++)
       {
           for ( j = 0; j < c1; j++)
           {
             arr[i][j]=arr1[i][j]+arr2[i][j];
              printf("%d\t",arr[i][j]);
           }
          printf("\n");
       }
       
       
}