# include<stdio.h>
void main(){
    int arr[100][100],r,c,i,j,sum=0;
    printf("enter the row \n");
    scanf("%d",&r);
    printf("enter the column\n");
    scanf("%d",&c);
    printf("enter the number\n");
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
            if (i==j)
            {
             sum=sum+arr[i][j];
            }
            
        }
        
    }
    printf("the sum of diognal pair is := %d",sum);
    
}