#include<iostream>
using namespace std;
int sum(int a , int b)
{
    return (a+b);
}

int sum(int a , int b , int c)
{
    return(a+b+c);
}

int main()
{
    int x,y,r,s,t;
    cout<<"enter two numbers:"<<"\n";
    cin>>x>>y;
    cout<<"again enter three numbers:"<<"\n";
    cin>>r>>s>>t;
    cout<<"sumation of the first two numbers: "<<sum(x,y)<<"\n"<<"sumation of the next three numbers: "<<sum(r,s,t);
    return 0;
}