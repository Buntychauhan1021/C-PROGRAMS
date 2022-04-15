# include<stdio.h>
void inputmatrix(int arr[100][100],int r,int c);
void outputmatrix(int arr[100][100],int r,int c);
void transposematrix(int arr[100][100],int r,int c);
void main(){
    int arr[100][100],r,c;
    printf("enter the row\n");
    scanf("%d",&r);
    printf("enter the column\n");
    scanf("%d",&c);
    printf("enter the matrix\n");
    inputmatrix(arr,r,c);
    printf("print the matrix\n");
    outputmatrix(arr,r,c);
    printf("transpose matrix\n");
    transposematrix(arr,r,c);
}
    void inputmatrix(int arr[100][100],int r,int c)
    {
        int i,j;
        for (i = 0; i < r; i++)
        {
            for ( j = 0; j < c; j++)
            {
                scanf("%d",&arr[i][j]);
            }
            printf("\n");
            
        }
        
    }
    void outputmatrix(int arr[100][100],int r,int c)
    {
         int i,j;
        for (i = 0; i < r; i++)
        {
            for ( j = 0; j < c; j++)
            {
                printf("%d\t",arr[i][j]);
            }
            printf("\n");
            
        }

    }
    void transposematrix(int arr[100][100],int r,int c)
    {
         int i,j;
        for (i = 0; i < c; i++)
        {
            for ( j = 0; j < r; j++)
            {
                printf("%d\t",arr[j][i]);   
            }  

            printf("\n");
            
        }

    }






