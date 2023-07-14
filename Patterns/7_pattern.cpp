/*
1       
23      
345     
4567    
56789   
67891011
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    int i=1;
    while(i<=n)
     {  int j=0;
        int m=i;
        while(j<i)
        {    
            cout<<m<<" ";
            m++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}