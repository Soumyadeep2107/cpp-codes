#include<bits/stdc++.h>
using namespace std;
// in 2D array there is row and column and they are visualsed like 2D array but in the memory it is stored like in 1d array.
int main()
{
    int arr[3][4];
    cout<<"enter the elements in the 2-d array:"<<endl;
    
    // Taking input-in row wise.
    // here for 1st interation of row we take 4 inputs of column
    // for(int row=0;row<3;row++)
    // {
    //     for(int column=0;column<4;column++)
    //     {
    //         cin>>arr[row][column];  // This is how we can take input 
    //     }
    // }
    

    // taking input in columnn wise-manner.
    // here for 1st iteration of column we take 3 inputs of row.
    for(int column=0;column<4;column++)
    {
        for(int row=0;row<3; row++)
        {
            cin>>arr[row][column];
        }
    }
    for(int row=0;row<3;row++)
    {
        for(int column=0;column<4;column++)
        {
            cout<<arr[row][column]<<" ";  // This is how we can print something.
        }
        cout<<endl;
    }
}