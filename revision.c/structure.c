# include<stdio.h>
# include<string.h>
# include<conio.h>
struct student
{
    int rollno;
    char name[100];
};

int main()
{
    struct student st[10];
    int i,n;
    printf("enter the number\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter rollnumber\n");
        scanf("%d",&st[i].rollno);
        printf("enter name\n");
       scanf("%s",st[i].name);
       //gets(st.name);
    }
    printf("student information list\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nrollno is : %d\nname is : %s",st[i].rollno,st[i].name);
    }
}