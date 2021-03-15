#include<stdio.h>
int main()
{
    int i=0,n,arr[20];
    printf("enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("the given aray element are:\n");
    for(i=0;i<n;i++)
    printf("arr[%d]=%d\n",i,arr[i]);
    return 0;
}