# include<stdio.h>
void keshav(int a){
    printf("The address of a %u\n",&a);
}
int main(){
    int i=4;
    printf("The value of i is %u\n",i);
    keshav(i);
    printf("The address of i is %u\n",&i);
    return 0;
}