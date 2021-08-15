#include<iostream>
using namespace std;
class student
{
    private:
    int rollno;
    char name[20];
    char blood_gp[20];
    public:
    void getinfo();
    void display();
};

void student::getinfo()
{
    cout<<"enter the roll number of the student:"<<"\n";
    cin>>rollno;
    cout<<"enter the name of the student:"<<"\n";
    cin>>name;
    cout<<"enter the blood group of the  student:"<<"\n";
    cin>>blood_gp;
}

void student::display()
{
    cout<<"\n"<<"ROLL NUMBER:"<<rollno<<"\n\n";
    cout<<"NAME:"<<name<<"\n\n";
    cout<<"BLOOD GROUP:"<<blood_gp<<"\n\n";
}

int main()
{
    class student s;
    s.getinfo();
    s.display();
    return 0;
}