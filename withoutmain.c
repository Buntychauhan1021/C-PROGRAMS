# include<stdio.h>
int main(){
    int ar[10],i;
    printf("enter ten number\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("ten number\n");
     for (i = 0; i < 10; i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
    
}