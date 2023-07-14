#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int start= n-i+1;
        int j=1;
        while(j<=start)
        {
            cout<<"*";
            start=start-1;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
