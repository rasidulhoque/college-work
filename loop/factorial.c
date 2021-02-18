#include<stdio.h>
int main()
{
    int i,num,fact=1;
    printf("enter the number:");
    scanf("%d",&num);
    if(num==0)
    fact=1;
    else
    {
        for(i=1;i<=num;i++)
        fact*=i;
    }
    printf("the factorial of the given number is:%d",fact);
    return 0;
}