#include<iostream>
using namespace std;
int main()
/*
1 2 3 4 5 6 
7 8 9 10 11 12 
13 14 15 16 17 18 
19 20 21 22 23 24 
25 26 27 28 29 30 
31 32 33 34 35 36 */
{
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    int i=0;
    int j=i;
    while(i<n)
    {  
        while(j<((i+1)*n))
        {
            cout<<j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

}