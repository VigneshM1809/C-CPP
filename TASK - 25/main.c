#include<stdio.h>
#include<conio.h>
int main()
{
    FILE*fp;
    char another='Y';
    struct emp
    {
        char name[40];
        int age;
        float bs;
    }e;
    fp=fopen("employee.dat","wb");
    if(fp==NULL)
    {
        puts("File cannot open");
        return 1;
    }
    while(another=='Y')
    {
        printf("\nEnter Name:");
        scanf("%s",&e.name);
        printf("Enter Age:");
        scanf("%d",&e.age);
        printf("Enter the basic salary:");
        scanf("%f",&e.bs);
        fprintf(fp,"%s %d %f",e.name,e.age,e.bs);
        printf("\nAdd another record(Y/N):");
        fflush(stdin);
        another=getche();
    }
    fclose(fp);
    printf("\nRecord saved succesfully");
}
