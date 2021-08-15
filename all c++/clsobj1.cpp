#include<iostream>
using namespace std;
class sub
{
    private:
    int x;
    int y;
    public:
    void getinfo()
    {
        cout<<"enter two numbers:";
        cin>>x>>y;
    }
    void display()
    {
        cout<<"x is"<<"\n"<<x<<"\n";
        cout<<"y is"<<"\n"<<y<<"\n";
        cout<<"sum is"<<"\n"<<sum()<<"\n";
        cout<<"diffrence is"<<diff()<<"\n";
    }
    int sum()
    {
        return(x+y);
    }
    int diff()
    {
        return(x-y);
    }
};

int main()
{
    sub s;
    s.getinfo();
    s.display();
    return 0;
}