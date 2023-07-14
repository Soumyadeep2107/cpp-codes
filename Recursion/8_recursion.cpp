// here we use the functional recursion 
#include<iostream>
using namespace std;
int func_recurs(int n)
{
   if(n==0)
   {
    return 0;
   } 
   return n+func_recurs(n-1);
}
int main()
{
    int n;
    int sol;
    cin>>n;
    cout<<func_recurs(n);
    return 0;
}