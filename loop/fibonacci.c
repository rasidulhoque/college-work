#include<stdio.h>
int main()
{
    int r,f=0,p=1,c,i;
    printf("give the range");
    scanf("%d",&r);
    for(i=0;i<=r;i++)
    {
        printf("\n%d",f);
        c=f+p;
        f=p;
        p=c;
    }
    return 0;
}