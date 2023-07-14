//printing from N to 1 using the backtracking method.
#include<iostream>
using namespace std;
void backtracking(int s, int n)
{
    if(s>n)
    {
        return;
    }
    backtracking(s+1,n);
    cout<<s<<endl;
}
int main()
{
    int n;
    cin>>n;
    backtracking(1,n);
    return 0;
}