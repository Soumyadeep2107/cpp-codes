#include<bits/stdc++.h>
using namespace std;
int main()
{  // priority queue is a queue in which the greater element will be in the top of the queue and the smaller element in the buttom of the stack. This is called max heap.
    priority_queue<int>pq;
    pq.push(1);//{1}
    pq.push(3); //{3,1}
    pq.push(4); //{4,3,1}
    pq.push(2); //{4,3,2,1}
    pq.push(5); //{5,4,3,2,1}
    pq.pop();
    
    //printing of a priority queue.
    //priority queue can't be simply printed by for each loop , becuase priority queue represented in stack manner and the elements stored in it through tree data structure.
    while(!pq.empty())
    {
        cout<<pq.top()<<endl; //print the element at the top of the queue
        pq.pop(); //pop the element at every iteration. It happens in O(logn)
    }
    //now to store the elements in the stack such that the smallest element will reside at the top and largest will be at the buttom of the stack.That is called a min heap.
    priority_queue<int, vector<int>, greater<int>>pq1;
    pq1.push(2); //push happens in O(log n)
    pq1.push(3);
    pq1.push(4);
    pq1.push(1);
    pq1.push(5);
    pq1.push(6);
    // cout<<pq.top()<<endl;
    cout<<"Below is the min heap:"<<endl;
    while(!pq1.empty())
    {
        cout<<pq1.top()<<endl; //top() happens in O(1).
        pq1.pop();
    }

}