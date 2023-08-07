#include<bits/stdc++.h>
using namespace std;
// using gloabal variable is considered as bad practice as if any function which uses the global variable can easily modify it and that change will be reflected all over the program.
// to use a variable as shared we can use call by referece method.
int z=26;
void use(int &m)
{
    m=m+1;
    cout<<m<<endl;
}
void func(int &n)
{
    z=z-n; // as we changed the value of the z-variable which is global so this change will be reflected to whole program.
    cout<<z<<endl;
}
int main()
{
 int a =16;
 use(a);
 func(a);
 cout<<a<<endl;
 cout<<z<<endl;
 return 0;
}