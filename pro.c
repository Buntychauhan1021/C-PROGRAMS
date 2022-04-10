# include<stdio.h>
void printpattern(int m);
int main(){
    int n=5;
    printpattern(n);
    return 0;
}
 void printpattern(int m)
 {
     if(m==1){
         printf("*\n");
         return;
     }
     printpattern(m-1);
   for(int i=0;i<m;i++)
   {
       printf("*");
   }
   printf("\n");
 }