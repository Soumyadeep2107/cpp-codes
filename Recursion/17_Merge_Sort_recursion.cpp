#include<bits/stdc++.h>
using namespace std;
void Sort_and_merge(int arr[], int low, int mid,int high)
{  //Every time when this function is called then the temp vector is formed so in the worst case space coplexity will would be O(n)
    vector<int> temp;
    int left=low;
    int right= mid+1;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]= temp[i-low]; // since every case new vector is forming when function is called and to acess the index of the vector from startig we are using i-low as the temp index in the loop.
    }
}
void dividing_arr(int arr[], int low,int high)
{
if(low==high)
    return;
int mid= (low+high)/2;
dividing_arr(arr,low,mid); // left part
dividing_arr(arr,mid+1,high); //right part
Sort_and_merge(arr,low,mid,high); // after dividing the right and left part sorting and merging the array
}
// note dividing the array would total take O(log n) time and then merging them would take O(n) and thus the total time taken for worst case would be O(n*log n).
int main()
{
    int arr[]={3,1,2,4,1,5,6,2,4};
    vector<int>v;
    int low=0;
    int high=8;
    dividing_arr(arr,low,high);
    for(int i=0;i!=high;i++)
    {
        cout<<arr[i]<<" ";
    }
}