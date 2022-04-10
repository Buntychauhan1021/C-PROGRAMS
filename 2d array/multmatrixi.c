# include<stdio.h>
void main(){
    int arr1[2][2]={{2,2},{2,2}},arr2[2][2]={{2,9},{2,2}},j,i,k,sum,r,c,arr3[2][2];
    // printf("enter the row\n");
    // scanf("%d",&r);
    // printf("enter the column\n");
    // scanf("%d",&c);
    // printf("enter the number \n");
    // for ( i = 0; i < r; i++)
    // {
    //     for ( j = 0; j < c; j++)
    //     {
    //         scanf("%d",&arr[i][j]);
    //     }
    //     printf("\n");
        
    // }
     for ( i = 0; i < 2; i++)
     {
        for ( j = 0; j < 2; j++)
        {    sum=0;
            for ( k = 0; k <2; k++)
            {
                sum=sum+arr1[i][k]*arr2[k][j];
            }
            arr3[i][j]=sum;
             printf("%d\t",arr3[i][j]);
        }
        
        printf("\n");
     }
    
         
}
