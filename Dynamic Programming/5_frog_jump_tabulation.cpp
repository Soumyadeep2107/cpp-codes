#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    vector<int>height;
    height={30,10,60,10,60,50};
    vector<int>dp(n,0);
    dp[0]= 0;
    int first,sec;
    for(int i=1;i<n;i++)
    {    
        // note when we are having index-1 and index-2 in our dp array we can always the space optimise it.
         first=dp[i-1]+ abs(height[i]-height[i-1]);
         sec=INT_MAX;
        if(i>1)
            sec=dp[i-2]+ abs(height[i]-height[i-2]);
        (dp[i]=min(first,sec));
        cout<<endl;
    }
    cout<<dp[n-1];
    return 0;
}