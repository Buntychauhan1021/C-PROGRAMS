# include<stdio.h>
int main(){
    int a1,a2,a3;
    printf("Enter the first angle\n");
     scanf("%d",&a1);
     printf("Enter the second angle\n");
     scanf("%d",&a2);
     printf("Enter the 3rd angle\n");
     scanf("%d",&a3);
     if((a1+a2+a3)==180)
     {
         printf("Yes this is triangle\n");
     }
     else
     {
         printf("This is not a triangle\n");
     }
     return 0;
}