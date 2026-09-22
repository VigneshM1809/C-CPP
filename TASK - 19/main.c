#include<stdio.h>
#include<conio.h>
int main()
{
    void fun1(int*,int);
    int a[]={12,11,50,3,5},i;

    for(i=0;i<5;i++)
    {
        printf("%d %u\n",a[i],&a[i]);
    }
    fun1(&a[0],5);
    getch();
}
void fun1(int*p,int n)
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d %u\n",*(p+i),(p+i));
    }
    return 0;
}
