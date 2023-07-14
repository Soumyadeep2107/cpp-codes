#include<bits/stdc++.h>
using namespace std;
int find_GCD(int n, int m)
{
    if(n==0)
        return m;
    if(m==0)
        return n;
    while(n!=m)
    {
        if(n>m)
        {
            n=n-m;
        }
        else
        {
            m=m-n;
        }
    }
    return n;
}
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    int gcd=find_GCD(num1,num2);
    cout<<gcd;
}