#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>p;
    p={1,2}; //p is the pair , which contains both the element 1 and 2.
    cout<<p.first<<" "<<p.second<<endl; //first shows the 1st element of the pair and second shows the second element of the pair.
    pair<int, pair<int,int>>p1;
    p1={1,{2,3}}; //the second element of the pair is itself a pair.
    cout<<p1.first<<" "<<p1.second.second<<" "<<p1.second.first<<endl;  //1 2 3
    pair<int,int>arr[]={{1,2},{4,9},{3,6}}; //arr is the array of elements
    cout<<arr[1].first<<" "<<arr[1].second<<endl; //4 9
}