// all unique combinations in the array where the array elements sum to the target.
#include<bits/stdc++.h>
using namespace std;
void findcombination(int ind, vector<int>&arr,vector<int>&ds,int target)
{
    if(target==0)
        {
          for(auto it: ds)
            cout<<it<<" ";
          cout<<endl;
          return;
        }
    for(int i=ind; i<arr.size(); i++)
    {
        if(i>ind && arr[i]==arr[i-1])
            continue;
        if(arr[i]>target)
            break;  // break is used instead of the return because we know the array is sorted and thus if one element is greater than the target then the element right to it will also be greater thus, 
        ds.push_back(arr[i]);
        findcombination(i+1,arr,ds,target-arr[i]);
        ds.pop_back();
    }
    
    
}
int main()
{  vector<int>arr={2,1,1,2,1};
   vector<int>ds;
   sort(arr.begin(),arr.end());
   findcombination(0,arr,ds,4);
   return 0;
}