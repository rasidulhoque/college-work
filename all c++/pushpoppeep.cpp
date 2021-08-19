#include<iostream>
using namespace std;
#define MAX 10
int st[MAX], top=-1;
void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);

main()
{

    int val, option;
    do
    {
        cout<<"********menu********"<<"\n";
        cout<<"1.PUSH"<<"\n"<<"2.POP"<<"\n"<<"3.PEEP"<<"\n"<<"4.DISPLAY"<<"\n"<<"5.EXIT"<<"\n";
        cout<<"************"<<"\n";
        cout<<"enter your option:";
        cin>>option;
        switch(option)
        {
            case 1:
            cout<<"enter the number to pushed to the stack: ";
            cin>>val;
            push(st, val);
            break;

            case 2:
            val=pop(st);
            cout<<"the number poped from the stack is :"<<val<<"\n";
            break;

            case 3:
            val= peek(st);
            cout<<"the value stored at the peek of the stack is: "<<val<<"\n";
            break;

            case 4:
            display(st);
            cout<<"\n";
            break;
        }
    }while(option!=5);
    return 0;
}

void push(int st[], int val)
{
    if(top==MAX-1)
    {
        cout<<"\n"<<"stack overflow";
    }
    else
    {
        top++;
        st[top]=val;
    }
}

int pop(int st[])
{
    int val;
    if(top==-1)
    {
        cout<<"\n"<<"stack underflow";
        return -1;
    }
    else
    {
        val=st[top];
        top--;
        return val;
    }
}

void display(int st[])
{
    int i;
    if(top==-1)
    cout<<"\n"<<"stack is empty";
    else
    {
        for(i=top; i>=0; i--)
        cout<<"\n"<<st[i];
    }
}

int peek(int st[])
{
    if(top==NULL)
    {
        cout<<"\n"<<"stack is empty";
        return -1;
    }
    else
    {
        return (st[top]);
    }
}