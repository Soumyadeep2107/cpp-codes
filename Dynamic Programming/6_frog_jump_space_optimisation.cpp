#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    vector<int>height;
    height={30,10,60,10,60,50};
    // vector<int>dp(n,0);
    // dp[0]= 0;
    int prev=0;
    int prev2=0;
    int current_i;
    int first,sec;
    for(int i=1;i<n;i++)
    {
         first=prev+ abs(height[i]-height[i-1]);
         sec=INT_MAX;
        if(i>1)
            sec=prev2+ abs(height[i]-height[i-2]);
        current_i=min(first,sec);
        prev2=prev;
        prev=current_i;
    }
    cout<<prev;
    return 0;
}