#include<stdio.h>
int main()
{
    int i,num,t=0,r,p;
    printf("enter the number:");
    scanf("%d",&num);
    p=num;
    while(num>0)
    {
     r=num%10;
     t=(t*10)+r;
     num=num/10;
    }
    num=p;
    if(num==t)
    printf("the given number is a palindrone:");
    else
    printf("the given number is not a palindrone");
    return 0;
}