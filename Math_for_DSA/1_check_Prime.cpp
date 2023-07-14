#include<bits/stdc++.h>
using namespace std;
bool checkPrime(int num)
{   if(num==1||num==0)
    {
        return false;
    }
    for(int i=2;i<num;i++)
    {
        if((num%i)==true)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int m= checkPrime(n);
    if(m==true)
        cout<<n<<" "<<"is a prime number"<<endl;
        else{
        cout<<n<<" "<<"is non-prime number"<<endl;
        }
    return 0;
}
