// ABCDEF
// EFGHIJ
// IJKLMN
// MNOPQR
// QRSTUV
// UVWXYZ
#include<iostream>
using namespace std;
int main()
{
  int n;
  int m=0;
  cout<<"Enter the number of rows:";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
        cout<<char('A'+ m)<<" ";
        m++;  
    }
    m=m-2;
    cout<<endl;
  }  
    return 0;
}