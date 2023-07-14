//Printing n times names according to the user input
#include<iostream>
using namespace std;
void name(int s, int e)
{
    if(s>e)
    {
        return;
    }
    cout<<"Hello Deep"<<endl;
    name(s+1,e);
}
int main()
{   int n;
    cin>>n;
    name(1,n);
    return 0;
}