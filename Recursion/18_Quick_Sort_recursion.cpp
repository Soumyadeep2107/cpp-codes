#include<bits/stdc++.h>
using namespace std;
// time complexity of this sorting algo is nlogn similar to merge sort and the space complexity of this will be O(1), becase we are not taking any extra vector at every recursion call. 
int partition_fuc(vector<int>&arr, int low,int high)
{
    int i=low;
    int j=high;
    int pivot= arr[low]; //we are assuming the first element as the pivot element 
    while(i<j)
    {   
        while(arr[i]<=pivot&& i<=(high-1))
        {
            i++;
        }
        while(arr[j]>pivot && j>=low+1)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;   
}
void quick_sort(vector<int>&arr, int low, int high)
{   if(low>=high)
        return;
    //pehle partition element nikalne wala kam
    int partion_index= partition_fuc(arr,low,high);
    //Uske baad left part ko sort karenge
    quick_sort(arr,low,partion_index-1);
    //fir right part ko sort karenge.
    quick_sort(arr,partion_index+1,high);


}
int main()
{
    vector<int>arr={4,6,2,5,7,9,1,3};
    int low=0;
    int high=7;
    quick_sort(arr,low,high);
    for(int it:arr)
    {
        cout<<it<<" ";
    }
}