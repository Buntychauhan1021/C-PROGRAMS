# include<stdio.h>
void swap(int *a,int *b);
void main(){
    int x=67,y=90;
     printf("enter number 1:\n");
     scanf("%d",&x);
     printf("ENter number 2:\n");
     scanf("%d",&y);
    //  printf(" %d  %d \n",x , y);
    swap(&x,&y);
    printf(" %d  %d ",x , y);

    
}
void swap(int *a,int *b){
    int z;
    z=*a;
    *a=*b;
    *b=z;
}