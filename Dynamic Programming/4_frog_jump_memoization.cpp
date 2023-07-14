#include<bits/stdc++.h>
using namespace std;
int func(int n, vector<int>&h,vector<int>&dp)
{   if(n==0)
        return 0;
    if(dp[n]!=-1)
        return dp[n];
    int left= func(n-1,h,dp)+ abs(h[n]-h[n-1]);
    int right=INT_MAX;
    if(n>1)
        right=func(n-2,h,dp)+ abs(h[n]-h[n-2]);
    return dp[n]=min(left,right);
}
int main()
{
    int n;
    cin>>n;
    vector<int>height;
    height={30,10,60,10,60,50};
    int i=0;
    vector<int>dp(n,-1);
    int min_energy=func(n-1,height,dp);
    cout<<min_energy;
}