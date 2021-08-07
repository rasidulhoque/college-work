#include<iostream>
using namespace std;
int smallest(int arr[],int k, int n);
void selct_sort(int arr[],int n);
int main()
{
  int  arr[10], i , n , j , k;
  cout<<"enter the number of elmenets in the array:";
  cin>>n;
  cout<<"enter the elements of the array:";
  for(i=0;i<n;i++)
  {
    cout<<"arr["<<i<<"]= ";
    cin>>arr[i];
  }
  selct_sort(arr, n);
  cout<<"The sorted array is:";
  for(i=0;i<n;i++)
  cout<<"\t"<<arr[i];
}

int smallest(int arr[],int k,int n)
{
    int pos =k,small= arr[k] , i;
    for(i=k+1;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
            pos = i;
        }
    }
    return pos;
}

void selct_sort(int arr[],int n)
{
    int k ,pos,t;
    for(k=0;k<n;k++)
    {
        pos=smallest(arr,k,n);
        t=arr[k];
        arr[k]=arr[pos];
        arr[pos]=t;
    }
}