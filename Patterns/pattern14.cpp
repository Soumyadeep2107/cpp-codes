#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    int i=1;
    int j=1;
    for(i=1;i<=n;i++)
    { char start= 'A'+ n-i;
     for(j=1; j<=i;j++)
     {
         cout<< start;
         start=start+1; 
     }
     cout<<endl;
    }
    return 0;
}