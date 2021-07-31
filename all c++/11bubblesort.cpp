#include<iostream>
using namespace std;
int main()
{
    int i,n,temp,j,arr[10];
    cout<<"enter the number of elements:";
    cin>>n;
    cout<<"enter the elements of the array:";
    for(i=0;i<n;i++)
    cin>>arr[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"The array sorted in ascending order is:"<<"\n";
    for(i=0;i<n;i++)
    cout<<"\t"<<arr[i];
    return 0;

}