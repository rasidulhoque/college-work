#include<stdio.h>
int main()
{
    int i,m,n,evensum=0,oddsum=0;
    printf("enter the starting number:");
    scanf("%d",&n);
    printf("enter the ending range:");
    scanf("%d",&m);
    while(n<=m)
    {
        if(n%2==0)
        evensum+=n;
        else
        oddsum+=n;
        n++;
    }
    printf("\nthe sum of the even sum is:%d",evensum);
    printf("\nthe sum of the odd sum is:%d",oddsum);
    return 0;
}