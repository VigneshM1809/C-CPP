#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],*p[100],i;
    clrscr();
    printf("Enter the number:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        p[i]=&a[i];
    }
    printf("\n\tAddress\tNumber\n");
    for(i=0;i<10;i++)
    {
        printf("\t%u\t%d\n",p[i],*p[i]);
    }
    getch();
}
