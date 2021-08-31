#include<iostream>
using namespace std;
class addition
{
    public:
    int a,b,c;
    addition()
    {
        cout<<"enter two numbers:"<<"\n";
        cin>>a>>b;
        c=a+b;
    }
    void display()
    {
        cout<<c;
    }
};

int main()
{
    addition c1;
    cout<<"sumation is: ";
    c1.display();
    return 0;
}

