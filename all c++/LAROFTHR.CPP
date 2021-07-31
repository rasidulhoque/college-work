#include<iostream>
using namespace std;
int main()
{
 int a,b,c,s;
 cout<<"enter three numbers:"<<"\n";
 cin>>a>>b>>c;
 s=((a>b&&a>c)?a:(b>c)?b:c);
 cout<<"largest of the three number is:"<<s;
 return 0;
}




