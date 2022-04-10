# include<stdio.h>
typedef struct basic
{
    char name[100];
    int  salary;  

}kes;

void main()
{   kes keshav;
    int n;
    printf("enter the salary\n");
    scanf("%d",&keshav.salary);
    printf("enter name\n");
    scanf("%s",keshav.name);
    printf("the nam is %s and the salary is %d ",keshav.name ,keshav.salary);
}