// Counting of the number of prime numebers strictly less than the input number.
// can be solved by following brute force method.
// here for every number we are checking either it is prime or not till n-1 so ,the complexity is O(n^2).
#include<bits/stdc++.h>
using namespace std;
bool isprime(int num)
{   if(num<=1)
    {
        return false;
    }
    for(int i=2;i<num;i++)
    {
        if((num%i)==0)
            return false;
        
    }
    return true;
}
int count_Prime(int num)
{   int count=0;
    if(num<=1)
    {
        return count;
    }
    for(int i=2;i<num;i++)
    {
        if(isprime(i)==true) //we are checking it for every number by calling isprime() and that increases the time complexity.
            count++;
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int m= count_Prime(n);
    cout<<"The number of prime numbers strictly less than n:"<<m;
    return 0;
}
