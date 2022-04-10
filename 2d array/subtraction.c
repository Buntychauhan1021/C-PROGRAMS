# include<stdio.h>
void main(){
    int arr1[2][2]={{5,4},{6,7}},arr2[2][2]={{1,2},{1,2}},i,j,arr3[2][2];
    printf("first matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
     printf("second matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    printf("the subtracion is\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            arr3[i][j]=arr1[i][j]-arr2[i][j];
             printf("%d\t",arr3[i][j]);
        }

       

         printf("\n");
    }
   
    

}