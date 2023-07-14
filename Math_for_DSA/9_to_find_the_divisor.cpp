// to find all the divisor of  the input number in less than O(n) complexity.
#include<bits/stdc++.h>
using namespace std;
// Naive approach:-
void find_divisors(int n )
{
    for(int i=1;i<=n;i++) // basically here we go form 1....n and thus gives the time complexity of  O(n).
    {
        if(n%i==0)
            cout<<i<<" ";
    }
    cout<<endl;
}
void find_divisors_opti(int n) // here we actuall not going till the value of an rather we go till sqrt(n), find mathematical pattern to solve the question.

{
    vector<int>ds;
    for(int i=1;i<=sqrt(n);i++)
    {  
        if(n%i==0)
        {
            ds.push_back(i);
            if((n/i)!=i)
                ds.push_back(n/i);
        }
    }
    sort(ds.begin(),ds.end());
    for(auto pr:ds)
        cout<<pr<<" ";
}
int main()
{
 int num;
 cin>>num;
 find_divisors(num);
 find_divisors_opti(num);
 return 0;
}