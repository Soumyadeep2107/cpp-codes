#include<iostream>
using namespace std;
int binary_search(int arr[], int size, int key)
{   int start=0;
    int end= size-1;
    int mid= start+(end-start)/2;
    while(start<=end)
    {   
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key>arr[mid]) //move to right part, start is changed but end is same 
        {
            start=mid+1;
        }
        else{ //key<arr[mid]
            end=mid-1;  //move to left part, end is changed but start is same.
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{   int a;
    int even[6]={2,5,12,18,23,29};
    int odd[5]={2,3,7,12,17};
    a=binary_search(even,6,23);
    cout<<"The element 6 is in "<<a<<" Index";
}
