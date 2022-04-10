# include<stdio.h>
int area(int height,int width);
void main(){
    int h,w;
    int are;
    printf("enter the value of h and w\n");
    scanf("%d%d",&h,&w);
   are= area(h,w);
    printf("the area is %d",are);
}
int area(int height,int width){
    
     return height*width;


}