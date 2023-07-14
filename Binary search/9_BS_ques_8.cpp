#include<iostream>
using namespace std;
bool ispossible(int arr[], int n, int k,int mid)
{
    int cowcount=1;
    int lastpos=arr[0];

    for(int i=0; i<n; i++)
    {
        if(arr[i]-lastpos>=mid)
        {
            cowcount++;
            if(cowcount==k)
            {
                return true;
            }
            lastpos=arr[i];
        }
    }
    return false;
}
int agressivecows(int arr[],int n,int k)
{   //actually we should have sorted the array which is unsorted,but since we are not using the vectors we won't use the sort ,and thats why this fuction will be passed a sorted array.
    int start=0;
    int end;
    int maxi=-1;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        if(maxi<arr[i])
        {
            maxi=arr[i];
        }
    }
    end=maxi;
    int mid= start+(end-start);
    while(start<=end)
    {
        if(ispossible(arr,n,k,mid))
        {   ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int arr[]={1,2,3,4,6};
    int solution=agressivecows(arr,5,2);
    cout<<solution;
}