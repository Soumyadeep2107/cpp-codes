// to find the number of occurences of the element in the array 
// there are two logics to solve the question , first is to find the left and right part occurences and add them.
// and the second logic is to find the first  and last occurences and then use (l-f)+1 for total occurences. 
#include<iostream>
using namespace std;
int First_occur(int arr[], int size, int key)
{   int start=0;
    int end=size-1;
    int ans=-1;
    int mid= start+(end-start)/2;
    while(start<=end)
    {   //if the key is found at the mid element
        if(arr[mid]==key)
        {
           ans=mid;
           end= mid-1; //checking the left part for the same element to get the first occurence. 
        }
        else if(arr[mid]<key)
        {
            start=mid+1; //in increasing sorted array , go to right part.
        }
        else 
        {
            end=mid-1; //similary, go to left part.
        }
        mid= start+(end-start)/2;
    }
    return ans;
}
int Last_occur(int arr[], int size, int key)
{
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid= start+(end-start)/2;
    while(start<=end)
    {   //if the key is found at the mid element
        if(arr[mid]==key)
        {
           ans=mid;
           start= mid+1; //checking the right part for the same element to get the last occurence. 
        }
        else if(arr[mid]<key)
        {
            start=mid+1; //in increasing sorted array , go to right part.
        }
        else
        {
            end=mid-1; //similary, go to left part.
        }
         mid= start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int arr[8]={1,2,3,3,3,3,7,9}; // for the incresing sorted array .
    int a=First_occur(arr,8,3);
    int b=Last_occur(arr,8,3);
    cout<<"The total number of the occurences of the element is:"<<((b-a)+1);
    return 0;
}
