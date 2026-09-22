#include<stdio.h>
#include<conio.h>
int main()
{
    int sum(int *,int*);
    int a,b,s;
    printf("Enter the value of A and B:");
    scanf("%d %d",&a,&b);
    s=sum(&a,&b);
    printf("The number is:%d\n",s);
    return 0;
}
int sum(int *x,int *y){
    return (*x+*y);
}
