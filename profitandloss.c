# include<stdio.h>
int main(){
    int cp,sp,profit,loss;
    printf("Enter the cost price\n");
    scanf("%d",&cp);
    printf("Enter the selling price\n");
    scanf("%d",&sp);
    if(sp>cp){
        profit=sp-cp;
        printf("profit is %d",profit);
    }
    else{
        loss=sp-cp;
        printf("loss is %d",loss);
    }
    return 0;
}