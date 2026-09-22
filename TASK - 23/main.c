#include<stdio.h>
#include<conio.h>
int main()
{
    struct address
    {
        char name[20];
        char city[10];
        char add[20];
        long long int phone;
    }a;
    struct emp
    {
        int eno;
        struct address a;
    };
    struct emp e[100];
    int i,n;
    printf("Enter the number of employee:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Employee %d:",i+1);
        printf("\nEmployee number:");
        scanf("%d",&e[i].eno);
        printf("Name:");
        scanf("%s",&e[i].a.name);
        printf("Address:");
        scanf("%s",&e[i].a.add);
        printf("City:");
        scanf("%s",&e[i].a.city);
        printf("Phone Number:");
        scanf("%lld",&e[i].a.phone);
    }
        printf("-------------------------------------------------------------------\n");
        printf("Eno\tName\t\tAddress\t\tCity\t\tPhone\n");
        printf("-------------------------------------------------------------------\n");
        for(i=0;i<n;i++)
        {
            printf("%d\t%s\t\t%s\t%s\t\t%lld\n",e[i].eno,e[i].a.name,e[i].a.add,e[i].a.city,e[i].a.phone);
        }
        getch();
}
