# include<stdio.h>
void main()
{
    int arr[100][100],r,c,i,j,sum=0;
    printf("enter the row");
    scanf("%d",&r);
    printf("enter the column");
    scanf("%d",&c);
    printf("enter the number");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
        
    }
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            sum=sum+arr[i][j];
        }
        printf("the the is %d row := %d",i,sum);
        printf("\n");
        sum=0;
        
        
    }
    for ( i = 0; i < c; i++)
    {
        for ( j = 0; j < r; j++)
        {
            sum=sum+arr[i][j];
        }
        printf("the the is %d column := %d",i,sum);
        printf("\n");
        sum=0;
    }
    

    
}
