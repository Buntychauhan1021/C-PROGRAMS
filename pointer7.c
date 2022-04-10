# include<stdio.h>
int main(){
    int i=34,*ptr;
    ptr=&i;
    printf("The value of ptr is %u\n",ptr);
    //ptr++;
    //ptr=ptr+1;
    //ptr++;
    ptr=ptr+2;
    printf("The value of ptr is %u",ptr);
    return 0;

}