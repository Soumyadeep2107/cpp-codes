#include<bits/stdc++.h>
using namespace std;
// at most to climb the top most stair we can climb through 2-ways, taking 1 step at a time or 2 step at a time.
int climb_stairs(int n,int s)
{   if(s==n)
        return 1;
    else if(s>n)
        return 0;
    int l=climb_stairs(n,s+1);  // climbing 1 step at a time 
    int r= climb_stairs(n,s+2); //climbing 2 steps at a time.
    return l+r; 
}
int main()
{
    int n;
    cin>>n;
    int start=0;
    int res=climb_stairs(n,start);
    cout<<res;
    return 0;
}