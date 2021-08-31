#include<iostream>
using namespace std;
class addition
{
    public:
    int a,b,c;
    addition()
    {
    cout<<"enter two integer:"<<"\n";
    cin>>a>>b;
    c=a+b;
    }

};

int main()
{
    addition c1;
    cout<<"sumation is: "<<c1.c;
    return 0;
}