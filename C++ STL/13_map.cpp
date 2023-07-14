#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Maps are the associative containers that stores elements in a mapped fashion.Each element has a key value and a mapped value. No two mapped values can have the same key values.
    //key values in the map will be in sorted manner. 
    // following are the way through which a map variable cn be declared.

    map<int,int>mpp; //first int is data type of key and second one is for the element.
    map<int,pair<int,int>>mpp1; //first one is key  and second one is element exist in pair
    map<pair<int,int>,int>mpp2; //first int is key in pair and second is element.

    //note the key can be of any data type.

    mpp[1]=2; //1 is the key(basically a index) and 2 is its respective element
    mpp.insert({2,4}); //these are the way to store the elements in the key. i.e.
    mpp.insert({3,5}); /*   [{1,2} 
                             {2,4}
                             {3,5}]   */

    mpp2[{2,30}]=10; //key is pair and a element is mapped with it.
    for(auto it:mpp)
    {
        cout<<it.first<<" "<<it.second<<endl; //first is the key and second is the element
    }
    cout<<mpp[1]<<endl;//element at key 1.
    cout<<mpp[5]<<endl;//element at key 5, but there is no element so it will be null or 0.
    auto it1=mpp.find(3); //it1 will find the 3 key , and the iterator points the 3 and it,second give the element 5.
    cout<<*it1.second<<endl;
}