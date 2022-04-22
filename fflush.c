# include<stdio.h>
# include<stdlib.h>
int main(){
    int x ,y;
    printf("enter x\n");
    scanf("%2d",&x); //means that you can take only two integer number
     fflush(stdin);  //clean the input buffer
    printf("enter y\n");
    scanf("%d",&y);
    printf("the value of x =%d\nthe value of y= %d",x,y);

}