# include<stdio.h>

// auto storage intitialization



// int main(){
//   auto int var;  //auto is not compulsory
//     printf("%d",var);//garbage value
// }


//global initialization 

//  int var;   //global initialization with zero
//  int main(){
//     printf("%d",var);
// }




// wap to static variable

void stat(void);
int main(){
    int i;
    for ( i = 1; i <=3; i++)
    
        stat();
        return 0;
     
}
    void stat(void){
  static int x=0;
  x=x+1;
  printf("x = %d\n",x);
    }





