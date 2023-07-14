// to find the element in the sorted and rotated array.
// for example ,if arr=[1,3,5,7,8], then after rotating 'arr' at index 3, the array will be 'arr'=[7,8,1,3,5].
#include<iostream>
using namespace std;
 int pivot_element(int arr[], int size)
{
    int start=0;
    int end=size-1;
    int mid= start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]>arr[0])
        {
            start=mid+1;
        }
        else if(arr[mid]<arr[0])
        {
            end=mid;
        }
        mid= start+(end-start)/2;
    }
    return start;
}
int binary_search(int arr[], int s, int e, int key)
{   int start=s;
    int end= e;
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

int search(int arr[], int size, int key)
{
    int pivot=pivot_element(arr,size);
    if(arr[pivot]<key<arr[size-1]) // the condition for the second line in the graph
    {
        return binary_search(arr,pivot,size-1,key);
    }
    else if(arr[0]<key<arr[pivot-1]) // the condition for the first line in the graph
    {
        return binary_search(arr,0,pivot-1,key);
    }

}
int main()
{
    int arr[]={7,8,1,3,5};
    int key= 1;
    cout<<"The key is at index:"<<search(arr,5,1);
    return 0;
}