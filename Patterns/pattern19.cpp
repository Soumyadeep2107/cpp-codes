#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=(n-i+1))
        {
           cout<<(n-i+1);
           j++;
        }

       int k=1;
        while(k<=(i-1))
        {
          cout<<"*";
          k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}