# include<stdio.h>
int main(){
    int i ,j;
    for (int i = 0; i <= 5; i++)
    {
        for ( j = 0; j <=5; j++)
        {
            if ((i+j)>=6)
            {
                printf("%d ",i);
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
}