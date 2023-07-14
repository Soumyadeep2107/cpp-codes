#include<bits/stdc++.h>
using namespace std;
// in segemented sieve we can use the array of size upto 10^12.
vector<bool> create_sieve(int N)
{   vector<int>sieve(N,true);
    for(int i=2;i<=sqrt(N);i++)
        {
            if(sieve[i]==true)
                {
                    for(int j=i*2;j<=N;j++)
                        sieve[j]=false;
                }
        }
}
vector<int>generate_prime(int N)
{   vector<int>ds;
    // Step 1: we will create a sieve array where prime numbers are marked true.
    vector<bool>sieve=create_sieve(N);
    for(int i=0;i<=N;i++)
    {
        if(sieve[i]==true)
        {
            ds.push_back(i);
        }
    }
    return ds;
}
int main()
{ 
    int t;
    cin>>t; // we take input of number of test case we want to give.
    int l,r;
    while(t--)
    {
        cin>>l>>r;  // we will give the range of the array here
    }
    // step 2: we will the put the prime numbers in a vector.
    // Note that the max range give in the input will be segmented and the range in which it will be computed is in sqrt(n).
    vector<int>prime=generate_prime(sqrt(r)); 
    // step 3: we will create a dummy array,of range of r-l+1,i.e of <=10^6(if given r is upto 10^12), and put every place with true.
    vector<int>dummy(r-l+1,true);
    // step 4:Now we will traverse through the prime vector,and for each prime number we will check the multiples of these primes in the given range,and mark them as false.
    for(auto pr:prime)
    {   int firstMultiple=(l/pr)*pr;
        if(firstMultiple<l)
            firstMultiple+=pr;
        for(int j=max(firstMultiple,pr*pr);j<=r;j+=pr)
            dummy[j-l]=false;
    }
    // finally we print the prime numbers which are in the given range.
    for(int i=l;i<=r;i++)
    {
        if(dummy[i-l]==1)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

