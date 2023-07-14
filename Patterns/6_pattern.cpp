/*
1     
22    
333   
4444  
55555 
666666
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=1; i<=n; i++)
    {   
        for(int j=0;j<i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}