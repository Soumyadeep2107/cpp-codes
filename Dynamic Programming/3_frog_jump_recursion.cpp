#include<bits/stdc++.h>
using namespace std;
int func(int n, vector<int>&h)
{   if(n==0)
        return 0;
    int left= func(n-1,h)+ abs(h[n]-h[n-1]);
    int right=INT_MAX;
    if(n>1)
        right=func(n-2,h)+ abs(h[n]-h[n-2]);
    return min(left,right);
}
int main()
{
    int n;
    cin>>n;
    vector<int>height;
    height={30,10,60,10,60,50};
    int i=0;
    int min_energy=func(n-1,height);
    cout<<min_energy;
}