//with diffrent data types
#include<iostream>
using namespace std;
int mul(int , int);
float mul(float , float);
int main()
{
    int x,y;
    float p,q;
    cout<<"enter two integer:"<<"\n";
    cin>>x>>y;
    cout<<"enter two floating number:"<<"\n";
    cin>>p>>q;
    cout<<"product of the integer numbers is: "<<mul(x,y)<<"\n";
    cout<<"product of the floating numbers is: "<<mul(p,q)<<"\n";
    return 0;
}

int mul(int x, int y)
{
    return x*y;
}

float mul(float p, float q)
{
    return p*q;
}