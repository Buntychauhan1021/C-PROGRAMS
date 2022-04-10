# include<stdio.h>
union basic
{
    int a;
    int b;
    float c;
    double d;
};
 
 void main(){
     union basic st;
     
      printf("%d\n",&st.a);
      printf("%d\n",&st.b);
      printf("%d\n",&st.c);
      printf("%d\n",&st.d);
      printf("%d",sizeof(st));
 }