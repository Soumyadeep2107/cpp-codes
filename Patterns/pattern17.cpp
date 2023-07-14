#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {    int j=1;
        int space = i-1;
        while(j<=space)        //space print karane ke liye 
        {
            cout<<" ";
            j++;
        }
        int k=1;
        int star= n-i+1;
        while(k<=star)       //star print karwane ke liye 
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
        
    }
    return 0;
}