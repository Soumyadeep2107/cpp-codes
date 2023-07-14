// in the below code we have to print the combination of all the elements(note element can repeat) to achieve the target.
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void find_combination(int ind,int arr[], int size,vector<int>&ds,int target)
{
  if(ind==size)
  {
    if(target==0)
    {
        for(auto it:ds)
            cout<<it<<" "; 
        cout<<endl;   
    }
    return;
  }
  if(arr[ind]<=target)
  {
    ds.push_back(arr[ind]);
    find_combination(ind,arr,size,ds,target-arr[ind]);
    ds.pop_back();
  }
  find_combination(ind+1,arr,size,ds,target);
}
int main()
{
   int arr[]={2,3,6,1,7};
   vector<int> ds;
   int target=7;
   int n= sizeof(arr)/sizeof(int);
   find_combination(0,arr,n,ds,7);
   return 0;
}