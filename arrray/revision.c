# include<stdio.h>
int main(){
    int i,arr[100],j,temp;
    printf("enter the number\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        for ( j = i+1; j < 5; j++)
        {
        if (arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

        }
        
        }
       
        
        
    }
     for ( i = 0; i < 5; i++)
        {
            printf("%d\t",arr[i]);
        }
    

}