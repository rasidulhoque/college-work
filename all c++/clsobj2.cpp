#include<iostream>
using namespace std;
class date
{
    private:
    int day;
    int month, year;
    public:
    void getinfo()
    {
        cout<<"enter dates:";
        cin>>day>>month>>year;
    }
    void display()
    {
        cout<<"today's date is:"<<day<<"/"<<month<<"/"<<year;
    }
};

int main()
{
    class date today;
    today.getinfo();
    today.display();
    return 0;
}