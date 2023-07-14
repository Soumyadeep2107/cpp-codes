#include<bits/stdc++.h>
using namespace std;
int main()
{   // same as the list and the vector.
    deque<int>dq;
    dq.push_back(2); //{2}
    dq.emplace_back(3); //{2,3}
    dq.push_front(4); //{4,2,3}
    dq.emplace_front(5); //{5,4,2,3}

    dq.pop_back(); //{5,4,2}
    dq.pop_front(); //{4,2}

    cout<<dq.back(); // 2
    cout<<dq.front(); // 4

    //rest fuction same as the vector 
    //begin, end,rbegin,rend,clear,insert,size,swap.
}