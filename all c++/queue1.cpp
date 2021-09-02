#include<iostream>
using namespace std;
#define max 10
int queue[max];
int front=-1,rear=-1;
void insert(void);
int del_elm(void);
void display(void);
int main()
{
    int option, val;
    do
    {
       cout<<"\t"<<"**********"<<"\n";
       cout<<"1.insert an element:"<<"\n";
       cout<<"2.delete an element:"<<"\n";
       cout<<"3.display an element"<<"\n";
       cout<<"4.exit"<<"\n";
       cout<<"\t"<<"**********"<<"\n";
       cout<<"enter yout option: "<<"\n";
       cin>>option;
       switch(option)
       {
           case 1:
           insert();
           break;

           case 2:
           val=del_elm();
           cout<<"the number that was deleted is: "<<val<<"\n";
           break;

           case 3:
           display();
           break; 
       }
    }while(option!=4);
    return 0;
}

void insert()
{
    int num;
    cout<<"enter the number to be inserted in the queue: "<<"\n";
    cin>>num;
    if(rear==max-1)
    cout<<"overflow"<<"\n";
    if(front==-1 && rear==-1)
    front=rear=0;
    else
    rear++;
    queue[rear]=num;
}

int del_elm()
{
    int val;
    if(front==-1 || front>rear)
    {
        cout<<"underflow";
        return -1;
    }
    else{
        val=queue[front];
        front++;
        return val;
    }
}

void display()
{
    int i;
    cout<<"\n";
    for(i=front; i<=rear;i++)
    cout<<"\t"<<queue[i];
}