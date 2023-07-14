/*
ABCDEF
GHIJKL
MNOPQR
STUVWX
YZ[\]^
_`abcd
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of rows:";
    cin>>n;
    int m=0;
    for(int i=0; i<n; i++)
    {   int j=0;
       while(j<n) 
       {
        cout<<char('A'+m);
        m++;
        j++;
       }
       cout<<endl;
    }
    return 0;
}