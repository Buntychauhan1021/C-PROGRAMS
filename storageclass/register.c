# include<stdio.h>
int main(){
    register int x=5;
    int y;
    y=x++;
    x--;
    y=x+5;
    printf("%d\n",y);

    
}