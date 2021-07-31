#include<iostream>
using namespace std;
int main()
{
 int arr[10],num,i,n,f=0,pos= -1;
 cout<<"enter the number of elements:";
 cin>>n;
 cout<<"enter the elements:";
 for(i=0;i<n;i++)
 cin>>arr[i];
 cout<<"enter the number that has to searched:";
 cin>>num;
 for(i=0;i<n;i++)
 {
  if(arr[i]==num)
  {
   f=1;
   pos=i;
   cout<<"the searched element is:"<< num <<" at the postion:"<<i;
  }
 }
 if(f==0)
 cout<<num <<"does not exist in the array:";  
 return 0;
}




