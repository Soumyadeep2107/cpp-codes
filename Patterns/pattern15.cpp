#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int space= n-i;   
        while(space)     //space print karwane ke liye
        {
             cout<<" ";
             space=space-1;
        }
         int j=1;
        while(j<=i)

        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i++;
    }
    return 0;
}