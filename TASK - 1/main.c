#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping:%d %d\n",a,b,temp);
    return 0;
}
