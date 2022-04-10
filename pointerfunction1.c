# include<stdio.h>
printarray(int ptr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d is %d\n",i+1,ptr[i]);

    }
    ptr[3]=3;
}
int main(){
    
    int arr[]={112,22,33,44,555,66,44};
    printarray(arr,7);
     printarray(arr,7);
    return 0;
}