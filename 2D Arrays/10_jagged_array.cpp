// we have to create a jagged array dynamically. 
// jagged array is a type of array in which the number of rows are fixed but the number of columns in each row is not equal.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array."<<endl;
    cin>>n;
    int *cols= new int[n];
    // taking input of the variable column sizes of the 2-D array 
    for(int i=0;i<n;i++)
    {
        cin>>cols[i];
    }
    cout<<"The variable column sizes of the 2-D array are given below"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<cols[i]<<" ";
    }
    cout<<endl;
    
    int row ;
    cout <<"enter the number of row of the 2-D array"<<endl;
    cin>>row;

    // now we will create the jagged 2_d array dynamically.
    // we will create the row array dynamically ,firstly .
    int** arr= new int*[row]; 

    // taking the variable size of the columns of the array.
    for(int j=0; j<row;j++)
    {   
            arr[j]= new int[cols[j]];

    }

    // taking the input from the user.
    cout<<"Enter the elements in the array:"<<endl;
    for(int i= 0;i<row;i++)
    {
        for(int j=0 ;j<cols[i];j++)
        {
            cin>>arr[i][j];
        }
    }

    // now printing the jagged array.
    cout<<"So the Array is:"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0; j<cols[i];j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
