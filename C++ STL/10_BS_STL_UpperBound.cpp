#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(2);
    v.emplace_back(3);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    v.emplace_back(5);
    v.push_back(8);
    // upper_bound() function returns pointer of the position of next higheer number than num if the container contains one occurence of num. Returns pointer to the first positon of the next higher number than the last occurences of num if the conatiner contains multiple occurences of num.
    auto it= upper_bound(v.begin(),v.end(),4)-v.begin();
    cout<<it;
    
    auto it1=upper_bound(v.begin(),v.end(),9)-v.begin();
    cout<<it1;
}