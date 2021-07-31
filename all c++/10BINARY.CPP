#include<iostream>
using namespace std;
int main()
{
 int arr[10],num,i,n,pos= -1,beg,end,mid,f=0;
 cout<<"enter the  number of elemets:";
 cin>>n;
 cout<<"enter the elements:";
 for(i=0;i<n;i++)
 cin>>arr[i];
 cout<<"enter the number that has to be searched:";
 cin>>num;
 beg=0, end=n-1;
 while(beg<=end)
 {
  mid=(beg+end)/2;
  if(arr[mid]==num)
  {
   cout<<num <<" is present in the position:"<< mid;
   f=1;
   break;
  }
  if(arr[mid]>num)
  end=mid-1;
  else if(arr[mid]<num)
  beg=mid+1;
 }
 if(beg>end && f==0)
 cout<<num<<" does not exist in the array";
 return 0;
}




