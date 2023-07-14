#include<bits/stdc++.h>
using namespace std;
// int get_sum(int *arr, int n)   // in case of the array, by default it is pass by reference only.
// {   int sum=0;
//     for(int i=0; i<n;i++)
//     {
//         sum=sum+arr[i];
//     }
//     return sum;
// }
int main()
{
    // int n;
    // cin>>n;
    // int *arr= new int[n]; // variable size array,we should always use heap memory for dynamic memory allocation.
    // for(int i=0; i<n; i++)
    // {
    //     cin>>arr[i];   //arr[i]= *(arr+i);
    // }
    // int sum= get_sum(arr,n);
    // cout<<sum;
    // return 0;
    int *a=new int;
    *a=5;
    cout<<*a;
}