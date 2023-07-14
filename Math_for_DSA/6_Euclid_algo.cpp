// we can solve the gcd problem by using the euclid algorithm
#include<bits/stdc++.h>
using namespace std;
int euclid_algo(int a,int b)
{
    if(b==0)
        return a;
    
    return euclid_algo(b,a%b);

}
int main()
{
    int a,b;
    cout<<"Enter both the numbers:"<<endl;
    cin>>a>>b;
    // note that the a<b;
    int res=euclid_algo(a,b);
    cout<<res;
}