# include<stdio.h>
void fun(int arr[],int size);
void main(){
    int arr[2][2]={{2,2},{2,2}},arr1[2][2]={{2,2},{2,2}},i,j,n,arr2[2][2],sum=0,k;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
       
        {
        printf("%d\t",arr[i][j]);
    }
    printf("\n");
    }
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
       
        {
        printf("%d\t",arr1[i][j]);
    }
    printf("\n");
    }
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {    sum=0;
            for ( k = 0; k < 2; k++)
            {
            sum=sum+arr[i][k]*arr1[k][j];
           
            }
             arr2[i][j]=sum;
            printf("%d\t",arr2[i][j]);
        }
         printf("\n");
        
    }
     
   
    
    
}