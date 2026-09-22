#include<stdio.h>
#include<conio.h>
int main()
{
    struct person
    {
        int sno;
        char name[30];
        int age;
    }p[20];

    int i,n,sno;
    for(i=0;i<20;i++)
    {
    p[i].sno=i+1;
    printf("\nName:");
    scanf("%s",&p[i].name);
    printf("Age:");
    scanf("%d",&p[i].age);
    }
    printf("\nEligible candidate and age list\n");
    printf("-------------------------------------------------------------\n");
    printf("Sno\t\tName\t\t\t\tAge\n");
    printf("-------------------------------------------------------------\n");
    for(i=0;i<20;i++)
        {
            if(p[i].age>=18)
        {
            printf("%d\t\t%s\t\t\t\t%d\n",p[i].sno,p[i].name,p[i].age);
        }
        }
    getch();
}
