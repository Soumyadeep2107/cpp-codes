#include<bits/stdc++.h>
using namespace std;
void column_sum(int arr[][5],int row,int column){
    int max_column=INT_MIN;
    int sc=-1;
    for(int j=0;j<column;j++)
    {   int sum=0;
        for(int i=0;i<row;i++)
        {
             sum =sum+arr[i][j];// This is how we can print something.
        }
        cout<<"The Sum of the elements in the column "<<(j+1)<<" is "<<sum;
        if(max_column<sum)
        {
            max_column=sum;
            sc=j+1;
        }
        cout<<endl;
    }
     cout<<"Largest column sum is:"<<sc<<endl;
}
void row_sum(int arr[][5],int row,int column){
    int max_row=-1;
    int sr=-1;
    for(int i=0;i<row;i++)
    {   int sum=0;
        for(int j=0;j<column;j++)
        {
             sum =sum+arr[i][j];// This is how we can print something.
        }
        cout<<"The Sum of the elements in the row "<<(i+1)<<" is "<<sum;
        if(max_row<sum)
        {
            max_row=sum;
            sr=i+1;
        }
        cout<<endl;
    }
    cout<<"Largest Row sum is:"<<sr<<endl;
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
    cout<<"The Given 2-D array is:"<<endl;
    for(int row=0;row<4;row++)
    {   int sum=0;
        for(int column=0;column<5;column++)
        {
             cout<<arr[row][column]<<" ";// This is how we can print something.
        }
        cout<<endl;
    }
    row_sum(arr,4,5);
    column_sum(arr,4,5);

}