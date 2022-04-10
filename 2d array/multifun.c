# include<stdio.h>
void inparray(int arr[100][100],int arr1[100][100],int r,int c,int r1,int c1);
void outarray(int arr[100][100],int arr1[100][100],int r,int c,int r1,int c1);
void main(){
    int r,c,r1,c1,arr[100][100],arr1[100][100];
    printf("enter the row\n");
    scanf("%d",&r);
    printf("enter the column\n");
    scanf("%d",&c);
    printf("enter the row second matrix\n");
    scanf("%d",&r1);
    printf("enter the column second matrix\n");
    scanf("%d",&c1);
    inparray(arr,arr1,r,c,r1,c1);
    outarray(arr,arr1,r,c,r1,c1);
}
void inparray(int arr[100][100],int arr1[100][100],int r,int c,int r1,int c1){
    int i,j;
    printf("enter the number first matrix\n");
    for ( i = 0; i < r; i++)
    {
    for ( j = 0; i < c; i++)
    {
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
        }
        printf("enter the second matrix\n");
        for ( i = 0; i < r1; i++)
        {
            for ( j = 0; i < c1; i++)
            {
                 scanf("%d",&arr1[i][j]);
            }
            printf("\n");
           
        }
        
    
}
 void outarray(int arr[100][100],int arr1[100][100],int r,int c,int r1,int c1)
 { 
     int i,j,sum,arr3[100][100],k;
     printf("the mul is\n");
       for ( i = 0; i < r; i++)
       {
           for ( j = 0; j < c; j++)
           {  
               sum=0;
               for ( k = 0; k < c1; k++)
               {
                   sum=sum+arr[i][k]+arr[k][j];
               }
               arr3[i][j]=sum;
               printf("%d\t",arr3[i][j]);
               
           }
           printf("\n");
      }
       }