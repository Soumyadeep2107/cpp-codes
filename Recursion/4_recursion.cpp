// printing form N to 1 numbers according to the user input
#include<iostream>
using namespace std;
void name(int e, int s)
{
    if(e<s)
    {
        return;
    }
    cout<<e<<endl;
    name(e-1,s);
}
int main()
{   int n;
    cin>>n;
    name(n,1);
    return 0;
}