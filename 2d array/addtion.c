# include<stdio.h>
void main(){
    int i,j;
    int arr_first[2][2]={{2,3},{4,5}};
     int arr_second[2][2]={{2,3},{4,5}};
     int arr_third[2][2];
     printf("enter the first matrix\n");
     for ( i = 0; i < 2; i++)
     {
         for ( j = 0; j < 2; j++)
         {
             printf("%d\t",arr_first[i][j]);
         }
         printf("\n");
     }
     printf("enter the second matrix\n");
      for ( i = 0; i < 2; i++)
     {
         for ( j = 0; j < 2; j++)
         {
             printf("%d\t",arr_second[i][j]);
         }
         printf("\n");
     }
     printf("the sum is\n");
      for ( i = 0; i < 2; i++)
     {
         for ( j = 0; j < 2; j++)
         {
            arr_third[i][j]=arr_first[i][j]+arr_first[i][j];
            printf("%d\t",arr_third[i][j]);
         }
         printf("\n");
     }
    //    for ( i = 0; i < 1; i++)
    //  {
    //      for ( j = 0; j < 1; j++)
    //      {
    //        printf("%d\t",arr_third[i][j]);
    //      }
    //      printf("\n");
    //  }

     
}