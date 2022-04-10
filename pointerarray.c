# include<stdio.h>
int main(){
    int marks[4],i;
   int *ptr; 
 //   ptr=&marks[i];//you can give 0 1 2 3 4
      ptr=marks;
    for ( i = 0; i < 4; i++)
    {
        printf("Enter the value of %d: ",i+1);
        scanf("%d",ptr);//you can use ptr 
        ptr++;
}
 for ( i = 0; i < 4; i++)
 {
     printf("The marks is %d is %d\n",i+1,marks[i]);

      }
 
 return 0;   
}