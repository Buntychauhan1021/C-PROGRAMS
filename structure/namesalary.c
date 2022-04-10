# include<stdio.h>
struct basic
{
    char name[100];
    float  salary;  

};

void main(){
    
    struct basic keshav;
    int n;
    printf("enter the salary\n");
    scanf("%d",&keshav.salary);
    printf("enter name\n");
    scanf("%s",keshav.name);
    printf("the nam is %s and the salary is %d ",keshav.name ,keshav.salary);
}