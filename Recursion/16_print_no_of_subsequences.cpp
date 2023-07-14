// print no of subsequences whose element sum is equal to k.
#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
int print_subseq(int ind,int arr[],int size,int sum)
{
    if(ind==size)
    {
        if(sum==2)
        {
            return 1;
        }
        else {
            return 0;
        }
    
    }
    //take or pick the particular index into the subsequence 

    // sum+=arr[ind];
    int l=print_subseq(ind+1,arr,size,sum+arr[ind]);
    // not pick,or not take condition,this element is not added to your subsequence
    
    // sum-=arr[ind];
    int r=print_subseq(ind+1,arr,size,sum);
    return l+r;
    
}
int main()
{
    int arr[]={1,2,1};
    int index=0;
    int n= 3;
    int sum=0;
    int count=print_subseq(0,arr,n,sum);
    cout<<"The Count of subsequences:"<<count;
    return 0;

}