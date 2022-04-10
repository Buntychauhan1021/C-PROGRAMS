# include<stdio.h>
void swap(int *a,int *b);
int main(){
    int x=10,y=19;
    printf("Before swaping %d    %d\n",x,y);
    swap(&x,&y);
    printf("After swaping  %d    %d",x,y);
    return 0;
}
void swap(int *a,int *b){
 int temp;
     temp=*a;
     *a=*b;
     *b=temp;
   // *a=*a+*b;
    //*b=*a-*b;
    //*a=*a-*b;

}