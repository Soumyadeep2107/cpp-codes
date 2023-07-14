// Print all the Subsequences 
// subsequences are the contiguous/non_contiguous sequences,which follows the order.
// if we have  given a array={3,1,2} then the subsequences are {},1,2,3,{3,1},{1,2},{3,2},{3,1,2}. {3,2 } is non-contiguous.Note {3,2,1} cannot be a subsequences because it doesnt follow the order.
/*Time complexity of the program is c,as for every element there is two oprtion ,take and not take, 2^n and for each loop will be n, so overall is (2^n)*n*/
// Space complexity will be, O(n), because the maximum stack space will be used is n i.e size of array.
#include<bits/stdc++.h>
using namespace std;
void print_subseq(int ind,int arr[], vector<int> &ds,int size)
{
    if(ind==size)
    {
        for(auto it: ds)
            {
                cout<<it;                   
            }
        if(ds.size()==0)
        {
        cout<<"{}";
        }
        cout<<endl;
         return;
    
    }
    //take or pick the particular index into the subsequence 
    ds.push_back(arr[ind]);
    print_subseq(ind+1,arr,ds,size);
    // not pick,or not take condition,this element is not added to your subsequence
    ds.pop_back();
    print_subseq(ind+1,arr,ds,size);
    
}
int main()
{
    int arr[]={3,1,2};
    vector<int>ds;
    int index=0;
    int n= 3;
    print_subseq(0,arr,ds,n);
    return 0;

}