# include<stdio.h>
struct struc
{   int empid;
    char name[100];
    float salary;
    int age;

};
int main()
{
    struct struc  st[50];
    int i;
    {
        for ( i = 0; i < 2; i++)
        {
            printf("enter the empid  of %d\n",i+1);
            scanf("%d",&st[i].empid);
            printf("enter the name\n");
            scanf("%s",st[i].name);
            printf("enter the salary\n");
            scanf("%f",&st[i].salary);
            printf("enter the age \n");
            scanf("%d",&st[i].age);
        }
         
        for ( i = 0; i < 2; i++)
        {    printf("the empid is %d\n",st[i].empid);
             printf(" the name is %s",st[i].name);
            printf("the salary is %f\n",st[i].salary);
            printf("the age is %d",st[i].age);
        }
    
    }
    }
