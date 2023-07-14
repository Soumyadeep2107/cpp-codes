#include<bits/stdc++.h>
using namespace std;
int main()
{   // stack gets implementated by LIFO- last in first out.
    // basically in the stack there are mainly top(), pop(),push().
    //all the operation are happening in constant time i.e o(1).
    stack<int>st;
    st.push(1);//{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(4); //{4,3,2,1}
    st.push(5); //{5,4,3,2,1}
    st.emplace(6); //{6,5,4,3,2,1}
    cout<<st.top(); //top() gives the element at the top. i.e here 6.
    st.pop(); //6 get popped out->{5,4,3,2,1}
    st.pop(); // 5 get popped out-> {4,3,2,1}
    cout<<st.top(); //4
    cout<<st.size(); // number of elements are 4, so size is 4
    cout<<st.empty(); // no the stack is not empty, so false.
    stack<int> st1;
    st1.swap(st); // st got swapped by st1, that is elements in st stack copied to st1.
    cout<<endl; 
    cout<<st1.top();

}