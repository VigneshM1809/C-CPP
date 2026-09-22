#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int i,n,null;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==null){
        printf("Memory allocation failed\n");
        return 1;
    }
    for(i=0;i<n;i++)
    {
            printf("enter %d elements:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("You entered:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    free(arr);
    return 0;
}
