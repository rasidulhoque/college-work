#include<iostream>
using namespace std;
class fibonacci
{
    private:
    int f1,f2,fib;
    public:
    fibonacci()
    {
        f1=0;
        f2=1;
        fib=f1+f2;
    }
    void increment()
    {
        fib=f1+f2;
        f1=f2;
        f2=fib;
    }
    void display()
    {
        cout<<f1;
    }
};    
    
int main()
{
    int num;
    cout<<"enter the range of the series:";
    cin>>num;
    fibonacci f;
    for(int i=0;i<num;i++)
    {
        cout<<"\n";
        f.display();
        f.increment();   
    }
    return 0;
}


