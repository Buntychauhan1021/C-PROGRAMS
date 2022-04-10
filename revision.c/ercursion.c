# include<stdio.h>
void  fun (int arr[],int size);
int main(){
    int arr[100],n,i;
    printf("enter the  number\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);

    }
    fun(arr,n);
    

}
void fun(int arr[],int size){
    int i,j,temp;
    for ( i = 0; i < size; i++)
    {
        for ( j = i+1; j < size; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    for ( i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    
}