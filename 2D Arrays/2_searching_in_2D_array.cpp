#include<bits/stdc++.h>
using namespace std;
void isPresent(int arr[][5],int row, int column,int target)
{
    for(int i=0; i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(arr[i][j]==target)
            {
                cout<<"Element is present"<<endl;
                return ;
            }
        }
    }
    cout<<"Element not found"<<endl;
}
int main()
{
    int arr[4][5];
    cout<<"Enter the elements in the array."<<endl;
    for(int row=0;row<4;row++)
    {
        for(int column=0;column<5;column++)
        {
            cin>>arr[row][column];  // This is how we can take input 
        }
    }
    
    for(int row=0;row<4;row++)
    {
        for(int column=0;column<5;column++)
        {
            cout<<arr[row][column]<<" ";  // This is how we can print something.
        }
        cout<<endl;
    }
    cout<<"Enter the element you to chek present or not:"<<endl;
    int target;
    cin>>target;

    isPresent(arr,4,5,target);
}