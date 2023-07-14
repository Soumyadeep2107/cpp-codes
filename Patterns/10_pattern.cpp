// A
// BC
// CDE
// DEFG
// EFGHI
// FGHIJK
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int m=i;
        for(int j=0;j<i;j++)
        {
            cout<<char('A'+ (m-1))<<" ";
            m++;
        }
        cout<<endl;
    }
    return 0;
}