//Print any one of the subsequence whose sum is k
#include<bits/stdc++.h>
using namespace std;
bool print_subsequenceSum(int ind,vector<int> &ds, int arr[],int sum, int size)
{
    if(ind==size)
    {
        if(sum==3)
        {
            for(auto it:ds)
            {
                cout<<it<<" ";
            }
            return true;
        }
        return false;
    }
    
    //take condition 
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    if(print_subsequenceSum(ind+1,ds,arr,sum,size)==true)
        return true;
    //not take condition
    ds.pop_back();
    sum-=arr[ind];
    if(print_subsequenceSum(ind+1,ds,arr,sum,size)==true)
        return true;
    return false;
}
int main()
{   int arr[]={1,2,1};
    int sum=0;
    vector<int> ds;
    print_subsequenceSum(0,ds,arr,sum,3);
    return 0;
    
}
 
