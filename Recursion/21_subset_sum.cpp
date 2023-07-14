#include<bits/stdc++.h>
using namespace std;
void find_combination(int ind,int sum,vector<int>&arr,int N, vector<int>&sum_subset)
    {   
        if(ind==N)
            {   
                sum_subset.push_back(sum);
                return;
            }
            //take the element
            find_combination(ind+1,sum+arr[ind],arr,N,sum_subset);
            // not take the element 
            find_combination(ind+1,sum,arr,N,sum_subset);
    }
    int main()
    {   vector<int>arr={2,3};
        int N=arr.size();
        vector<int>sum_subset;
        find_combination(0,0,arr,N,sum_subset);
        sort(sum_subset.begin(),sum_subset.end());
        for(auto it:sum_subset)
            cout<<it<<" ";
        
    }