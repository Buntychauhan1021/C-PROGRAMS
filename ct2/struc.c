# include<stdio.h>
struct struc
{   int rollno;
    char name[100];
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;

};
int main()
{
    struct struc  st[30];
    int i;
    {
        for ( i = 0; i < 2; i++)
        {
            printf("enter the rollnumber");
            scanf("%d",&st[i].rollno);
            printf("enter the name");
            scanf("%s",st[i].name);
            printf("enter the subject\n");
            scanf("\n%d\n%d\n%d\n%d\n%d",&st[i].sub1,&st[i].sub2,&st[3].sub3,&st[i].sub4,&st[i].sub5);
        }
         
        for ( i = 0; i < 2; i++)
        {    printf("the rollnumber is %d\n",st[i].rollno);
             printf(" the name is %s",st[i].name);

            printf("\n%d\n%d\n%d\n%d\n%d",st[i].sub1,st[i].sub2,st[3].sub3,st[i].sub4,st[i].sub5);
        }
    
    }
    }
