// we need to find the peak element o max element in the mountain array
#include<iostream>
using namespace std;
int peak_element(int arr[], int size)
{
    int start=0;
    int end= size-1;
    int mid= start+(end-start)/2;
    while(start<mid)
    {   
         if(arr[mid]<arr[mid+1])  //this condition is till before the peak element of the mountain array.
        {
            start= mid+1;     // since the condition is not including the peak elemnt we need to put start=mid+1.
        }
        else if(arr[mid]>arr[mid+1]) //this condition is including the peak element.
        {
            end=mid; //if any how the mid comes the index of the peak element then mid-1 will skip the peak     element,that is why we have put end=mid.
        } 
        mid= start+(end-start)/2;
    }
    return mid;
}
int main()
{
    int arr[6]={2,3,9,10,4,1};
    cout<<"The peak element or max element in the given array(mountain array) is at index:"<<peak_element(arr,6);
    return 0;
}