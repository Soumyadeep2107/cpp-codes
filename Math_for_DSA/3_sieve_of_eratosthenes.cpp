// to optimise the count the number of prime we will use sieve of eratosthenes technique.
//here the time complexity will be O(n*log(logn))
#include<bits/stdc++.h>
using namespace std;
int count_prime(int n)
{
    vector<int>prime(n,true);
    prime[0]=prime[1]=false;
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(prime[i]==true)
        {
         count++;
        for(int j=i*2;j<n;j=j+i)
            prime[j]=false;
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    int m= count_prime(n);
    cout<<"The number of prime numbers strictly before the n:"<<m;
}