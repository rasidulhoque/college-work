//with different paarmeters
#include<iostream>
using namespace std;
int mul(int , int);
int mul(int , int ,int);

int main()
{
    int x,y,p,q,r;
    cout<<"enter any two number:"<<"\n";
    cin>>x>>y;
    cout<<"the product is: "<<mul(x,y)<<"\n";
    cout<<"enter any three nmmbers:"<<"\n";
    cin>>p>>q>>r;
    cout<<"the product is: "<<mul(p,q,r)<<"\n";
    return 0;
}

int mul(int x, int y)
{
    return(x*y);
}

int mul(int p, int q, int r)
{
    return(p*q*r);
}