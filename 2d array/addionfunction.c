# include<stdio.h>
void inparray(int arr[100][100],int r,int c);
void outarray(int arr[100][100],int r,int c);
void main(){
    int r,c,arr[100][100];
    printf("enter the array\n");
    scanf("%d",&r);
    printf("enter the column\n");
    scanf("%d",&c);
    inparray(arr,r,c);
    outarray(arr,r,c);
}
void inparray(int arr[100][100],int r,int c)
{
    int i,j;
    printf("enter the number\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    
}
void  outarray(int arr[100][100],int r,int c)
{
    int i,j,sum=0;
     for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            sum=sum+arr[i][j];
        }
        
    }
    printf("the sum is :=%d",sum);

}