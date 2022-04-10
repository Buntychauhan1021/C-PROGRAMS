# include<stdio.h>
int main(){
    int i=33;
    int *j=&i; // * is a value address operator
    printf("The value of i is = %d\n",i);
    printf("The value of i is = %d\n",*j); 
    printf("The address of i is = %u\n",&i);
    printf("The address of j is = %u\n",j);
    printf("The address of j is %u \n",&j);
    printf("The address of j is %d\n",*(&j));  
    return 0;

  //  printf("The value of ")  
}