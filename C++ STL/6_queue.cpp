#include<bits/stdc++.h>
using namespace std;
//Queue follow first in first out rule, and time complexity of all operation are O(1)
int main()
{
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(3); //{1,2,3}
    q.back()+=5; //{1,2,8} , i.e 3+5=8
    cout<<q.back()<<endl; //8
    cout<<q.front()<<endl;//1
    q.pop(); //1 get ooped out,as it comes first
    cout<<q.front()<<endl; //2

    //rest all things are same as previous.

}