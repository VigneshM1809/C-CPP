#include<stdio.h>
#include<conio.h>
int main()
{
    int *a,b[10];
    b[0]=5;
    a=&b[0];
    printf("%u\n",a);
    printf("%u\n",a+1);
    printf("%d\n",*a);
    printf("%d\n",*a+1);
    printf("%u\n",b);
    printf("%u\n",*b+1);
    getch();
}
