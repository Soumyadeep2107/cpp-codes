//Here we have to find the pivot element.
// here the pivot element is the minimum of the array.
// it could be also the maximum element of the array.

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
    return start; //we could have also returned the end,because at the end the value of both the start and end became same as they came to the pivot element.And that is why we get out of the while loop. 
    }
int main()
{
    int arr[]={4,5,7,1,2,3};
    cout<<"The pivot element in the array is:"<<pivot_element(arr,5);
    return 0;
}