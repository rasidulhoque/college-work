#include<iostream>
using namespace std;
int main()
{
 int i=0,arr[20],sum=0;
 for(i=0;i<10;i++)
 {
  cout<<"Arr["<<i<<"]=";
  cin>>arr[i];
  sum+=arr[i];
 }
 cout<<"the array elements are:";
 for(i=0;i<10;i++)
 cout<<"Arr["<<i<<"]="<<arr[i]<<"\t";
 cout<<"\n"<<"sumation="<<sum;
 return 0;
}




