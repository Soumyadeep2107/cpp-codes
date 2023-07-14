#include<bits/stdc++.h>
using namespace std;
int main()
{
    //everything is same as set
    //only stores duplicate elements also.
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.erase(1); //all 1' are erased 
    int count=ms.count(1); //count all number of 1s.
    ms.erase(ms.find(1)); //only  a single 1 is erased , that is only the 1 which is pointed by the iterator.
    ms.erase(ms.find(1),(ms.find(1) + 2));  //erase elements in [start,end)
    
    // rest all the functions same as set.

}