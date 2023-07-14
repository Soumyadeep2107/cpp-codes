// to print all the subsequences whose sum is k
#include<bits/stdc++.h>
using namespace std;
void print_subsequenceSum(int ind,vector<int> &ds, int arr[],int sum, int size)
{
    if(ind==size)
    {
        if(sum==2)
        {
            for(auto it:ds)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    //take condition 
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    print_subsequenceSum(ind+1,ds,arr,sum,size);
    //not take condition
    ds.pop_back();
    sum-=arr[ind];
    print_subsequenceSum(ind+1,ds,arr,sum,size);
}
int main()
{   int arr[]={1,2,1};
    int sum=0;
    vector<int> ds;
    print_subsequenceSum(0,ds,arr,sum,3);
    return 0;
    
}
 
