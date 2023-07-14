// to behold the large output which is not even stored by the long long data type we use the modulo operation, so that we can store that big ouput in the form of the modulo.Its a very popular technique to store the big numbers easily.
#include<bits/stdc++.h>
using namespace std;
long fast_exponentiation_recur(long a,long b,int m)
{
    int res;
    if(b==0)
    {
        return 1;
    }
    res=fast_exponentiation_recur(a,b/2,m);
    if(b&1)
        return ((a*(res*res)%m)%m);
    else 
        return (res*res)%m;
}
long fast_exponentiation(long x,long n,int m)
{
    int res=1;
    while(n>0)
    {
        if(n&1)
            res=(res%m*x)%m;
        x=(x%m*x%m)%m;
        n=n>>1;
    }
    return res;
}
int main()
{
    int x,n;
    int m;
    cin>>x>>n>>m;
    cout<<fast_exponentiation(x,n,m)<<endl;
    cout<<fast_exponentiation_recur(x,n,m)<<endl;
    return 0;
}