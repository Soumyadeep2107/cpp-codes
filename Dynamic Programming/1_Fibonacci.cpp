// to find the nth number of the fibonacci series using the recursion and the dp method.
#include<bits/stdc++.h>
using namespace std;
// we did it by using the recursion.
/*int func(int n)
{
    if(n<=1)
        return n;
    return func(n-1)+func(n-2);
}
int main()
{
    int n;
    cin>>n;
    int res=func(n);
    cout<<res;
    return 0;
} */
// now we will optimise the above code by memoisation.
/*int func(int n, vector<int>&dp)
{
    if(n<=1)
        return n;
    if(dp[n]!=-1)
        return dp[n];
    return dp[n]=func(n-1,dp)+func(n-2,dp);
}
int main()
{
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    int res=func(n,dp);
    cout<<res;
    return 0;
} */
// now we will do the tabulatin for space optimisation.
int func(int n)
{
    if(n<=1)
        return n;
    return func(n-1)+func(n-2);
}
int main()
{
    int n;
    cin>>n;
    vector<int>dp(n,0);
    dp[1]=1;
    dp[0]=0;
    for(int i=2; i<n; i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n-1];
    return 0;
}


