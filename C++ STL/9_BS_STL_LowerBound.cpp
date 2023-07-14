#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.emplace_back(4);
    v.push_back(4);
    v.emplace_back(6);
    v.emplace_back(9);
    int it=lower_bound(v.begin(),v.end(),4)-v.begin();
    //basically what happens in lower_bound function is, if the element is found then the iterator points to the exct index of that element, and if the element is not found then the iterator points to the index of next greater imediate of the input element in the array, example if 7 is asked for search it points to index of 9, and if 10 is asked for search it points to the next index of 9 , i.e 6th index.
    cout<<it<<endl;
    int it_1=lower_bound(v.begin(),v.end(),10)-v.begin();
    cout<<it_1<<endl;
}