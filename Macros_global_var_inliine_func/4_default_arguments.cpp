#include<bits/stdc++.h>
using namespace std;
// Let suppose we dont want to send the value of start from main(),so we will make the start a default argument and thus if we don't pass any value it will take the defualt value.
void print_array(int *arr, int n, int start=0)
{
    for(int i=start ;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout <<endl;
}
 
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n= sizeof(arr)/sizeof(int);
    print_array(arr,n);
    return 0;
}