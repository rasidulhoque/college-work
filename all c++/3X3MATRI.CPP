#include<iostream>
using namespace std;
int main()
{
int A[3][3],B[3][3],C[3][3],i,j;
cout<<"enter the elements of the matrix A:";
cout<<"\n\t---------------";
for(i=1;i<=3;i++)
{
 for(j=1;j<=3;j++)
 {
  cout<<"\n"<<"A["<<i<<"]"<<"["<<j<<"]"<<"=";
  cin>>A[i][j];
 }
}
cout<<"enter the elements of the matrix ";
cout<<"\n\t---------------";
for(i=1;i<=3;i++)
{
 for(j=1;j<=3;j++)
 {
  cout<<"\n"<<"B["<<i<<"]"<<"["<<j<<"]"<<"=";
  cin>>B[i][j];
 }
}
cout<<"\nthe elements of matix A:";
for(i=1;i<=3;i++)
{
 cout<<"\n";
 for(j=1;j<=3;j++)
 cout<<"\t"<<A[i][j];
}
 cout<<"\n"<<"the elements of matix B:";
  for(i=1;i<=3;i++)
{
 cout<<"\n";
 for(j=1;j<=3;j++)
 cout<<"\t"<<B[i][j];
}
for(i=1;i<=3;i++)
{
 for(j=0;j<=2;j++)
 {
  C[i][j]=A[i][j]+B[i][j];
 }
}
cout<<"\n"<<"sumation is:";
for(i=1;i<=3;i++)
{
 cout<<"\n";
 for(j=1;j<=3;j++)
 {
  cout<<"\t"<<C[i][j];
 }
}
return 0;  
}








