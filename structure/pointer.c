# include<stdio.h>
struct pointer 
{
    int salary;
    char name[100];
};

int main(){
    struct pointer st[10];
    struct pointer *pt=st;
    int i;
    for ( i = 0; i < 2; i++)
    {
    printf("enter the name \n");
    scanf("%s",st[i].name);
    printf("enter the salary\n");
    scanf("%d",&st[i].salary);
    }
     for ( i = 0; i < 2; i++){
    printf("\nthe salary is %d and the name is %s",pt->salary,pt->name);
    pt++;
    }

    


    // for ( i = 0; i < 2; i++)
    // {
    //     scanf("%d",st);
    // }
    
    
}