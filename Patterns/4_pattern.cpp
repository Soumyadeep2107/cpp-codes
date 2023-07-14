#include<iostream>
using namespace std;
int main()
{
    /*
654321
654321
654321
654321
654321
654321
*/
    int n;
    cout<<"enter the number of rows";
    cin>>n;
    for(int i=0; i<n;i++)
    {   
        for(int j=n;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0; 
}