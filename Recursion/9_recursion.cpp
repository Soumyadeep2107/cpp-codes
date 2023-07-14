//functional recursion method to find the factorial of a number.
#include<iostream>
using namespace std;
int factorial_func(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*factorial_func(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<"The factorial of the given number is:"<<factorial_func(n);
    return 0;
}