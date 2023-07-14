// Sum of first N numbers using the recursion(parameterised).
#include<iostream>
using namespace std;

void SumOfN(int n, int sum)
{
    if(n<0)
    {
        cout<<sum;
        return;
    }
    sum+=n;
    SumOfN(n-1,sum);
}
int main()
{
int n;
cin>>n;
SumOfN(n,0);
return 0;
}