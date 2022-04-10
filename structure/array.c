# include<stdio.h>
struct array
{
    int salary;
    char name[100];
};
void main(){
    int i,n;
    struct array st[10];
    
    printf("enter the number\n");;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter the name\n");
        scanf("%s",st[i].name);
        printf("enter the salary\n");
        scanf("%d",&st[i].salary);
    }

for ( i = 0; i < n; i++)
{
    printf("\nthe salary is %d and the name is %s",st[i].salary,st[i].name);
}

    // while (n!=0)
    // {
    //     printf("\nthe salary is %d nd the nae is %s",st[i].salary,st[i].name);
    //     n--;
    // }
    
    
}
