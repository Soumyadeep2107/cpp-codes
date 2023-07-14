// print the number from 1 to N according to the user input of N, by using the backtracking.
#include<iostream>
using namespace std;
void backtrack(int s)
{
    if(s<1)
    {
        return;
    }
    backtrack(s-1);
    //the printing will be done while back tracking.
    cout<<s<<endl;
}
int main()
{   int n;
    cin>>n;
    backtrack(n);
    return 0;
}