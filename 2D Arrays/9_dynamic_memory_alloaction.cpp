#include<bits/stdc++.h>
using namespace std;
int main()
{   //for 2-D matrix.
    // int n;
    // cout<<"enter the number of rows/column of the 2-D matrix"<<endl;
    // cin>>n;
    // // this is the case of n*n 2D array.

    // int **arr= new int*[n]; 
    // for(int i=0; i<n;i++)
    // {
    //     arr[i]= new int[n]; // arr[i]= is actually int * type pointer which we use to do like in 1D-array case where int *arr= new int[n];
    // }

    // when we have different row and columns , like n*m 2D matrix.
    int row,col;
    cout<<"enter the row:"<<endl;
    cin>>row;
    cout<<"Enter the column:"<<endl;
    cin>>col;
    
    int **arr = new int*[row];
    for(int i=0;i<row;i++)
    {
        arr[i]= new int [col];
    }
    // taking input in the array 
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    // printing the array 
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // since we know in the dynamic memory allocation heap memory is used where auto deletio is not possible
    // releasing the arrays.
    for(int i=0;i<row;i++)
    {
        delete [] arr[i];
    }
    // to delete the array which stores elements of type int* 
    delete [] arr;

return  0;
}