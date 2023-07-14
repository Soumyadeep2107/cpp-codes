// to find the Nth fibonacci number in a fibanocci series using the functional recursion call.
#include<iostream>
using namespace std;
int fibonacci_num(int n)
{   if(n==1)
    return 1;
    else if(n==0)
    return 0;
    return fibonacci_num(n-1)+fibonacci_num(n-2);
}
int main()
{
    int i=0;
    int j=1;
    int n;
    cin>>n;
    cout<<"The Nth number in the series is:"<<fibonacci_num(n);
}