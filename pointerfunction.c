# include<stdio.h>

    // printarry(int *ptr,int n){
    //    for (int i = 0; i < n; i++)
    //    {
    //        printf("The value of element %d is %d\n",i+1,*(ptr+i));

    //    }
    //}
    //  printarry(int ptr[],int n){
    //    for (int i = 0; i < n; i++)
    //    {
    //        printf("The value of element %d is %d\n",i+1,*(ptr+i));

    //    }
    //  }
    //  printarry(int ptr[],int n){
    //    for (int i = 0; i < n; i++)
    //    {
    //        printf("The value of element %d is %d\n",i+1,ptr[i]);

    //    }
    //  }
      printarray(int ptr[],int n){
       for (int i = 0; i < n; i++)
       {
           printf("The value of element %d is %d\n",i+1,ptr[i]);
            ptr[2] = 42222;
       }
      // ptr[2] = 42222;
     }
       int main(){
           int arr[]={12,22,12,55,44,33,33,99};
           printarray(arr,8);
          //   printarray(arr,8);
           //printf("%d",arr[2]);
           return 0;
       }
               
    
