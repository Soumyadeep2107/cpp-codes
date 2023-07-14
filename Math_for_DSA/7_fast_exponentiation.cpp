#include<bits/stdc++.h>
using namespace std;
long long  fast_exponentiation_recur(long long a,long long b)
{
    long long res;
    if(b==0)
    {
        return 1;
    }
    res=fast_exponentiation_recur(a,b/2);
    if(b&1)
        return a*res*res;
    else 
        return res*res;
}
long long fast_exponentiation(long long x,long long n)
{
    long long  res=1;
    while(n>0)
    {
        if(n&1) // basically we are checkig the odd , but main reason is to check the set bit.
            res=res*x;
        x=x*x;
        n=n>>1; //  right shift actually making the n half every time.
    }
    return res;
}
int main()
{
    long long x,n;
    cin>>x>>n;
    cout<<fast_exponentiation(x,n)<<endl;
    cout<<fast_exponentiation_recur(x,n)<<endl;
    return 0;
}