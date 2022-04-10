# include<stdio.h>
float circle(float radius);
float main(){
    float r,j;
    printf("enter the number\n");
    scanf("%f",&r);
     j = circle(r);
    printf("the area is %.1f",j);
}
float circle(float radius){
     float m;
     m=3.14*radius*radius;
     return m;
}