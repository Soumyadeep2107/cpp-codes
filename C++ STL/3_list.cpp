#include<bits/stdc++.h>
using namespace std;
int main()
{
    //list have same functions as the vectors, but the implementation in case of the vector is much costilier than the list.As in vector linkedlist is maintained and in the list doubly linkedlist is maitained. 

    list<int>ls;
    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}
    ls.push_front(3);   //in vector we use the insert operation which have more time complexity. so {3,2,4}
    ls.emplace_front(); //{0,3,2,4}
    for(auto it: ls)
    {
        cout<<(it)<<" ";
    }

    // rest of the functions are as similar to the vector.
    // begin,end,rbegin,rend,clear,insert, size,swap
}