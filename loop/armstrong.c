#include<stdio.h>
int main()
{
    int i,sum=0,r,num,t,cube;
    printf("enter the number:");
    scanf("%d",&num);
    t=num;
    while(num>0)
    {
        r=num%10;
        cube=r*r*r;
        sum=sum+cube;
        num=num/10;
    }
    num=t;
    if(num==sum)
    printf("the given number is a palindrone");
    else
    printf("the given number is not a palindron");
    return 0;
}