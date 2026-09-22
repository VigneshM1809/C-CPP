#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("\nBefore exchange......%d\t%d\n",a,b);
    exchange(&a,&b);
    printf("\nAfter exchange......%d\t%d\n",a,b);
    getch();
}
    void exchange(int *m,int *n)
    {

        int t;
        t=*m;
        *m=*n;
        *n=t;
        return 0;
    }

