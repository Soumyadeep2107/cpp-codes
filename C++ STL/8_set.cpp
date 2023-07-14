// in set everything is sorted manner and the elements are unique ,that is elements stored in it are not duplicate.
//it is again a container like the priority_queue which shown by help of a stack but inside it a tree is maintained.
// In set every operation occurs in the O(logn)
#include<bits/stdc++.h>
using namespace std;
int main()
{
  set<int>s;
  s.insert(1); //{1}
  s.insert(4);  //{1,4}
  s.insert(3);  //{1,3,4}
  s.emplace(3); //{1,3,4}
  s.insert(4);  //{1,3,4}
  s.emplace(5); //{1,3,4,5}

//functionality of insert in vector can be used also ,that only increases the efficiency.
// other functions are same like begin(), end(), size(), rbegin(),empty(),swap() are same as follows.
 
auto it=s.find(3); //it is a iterator which points at the address of 3 in the tree
cout<<*(it);
auto it1=s.find(6); //iterator point after the 5.
cout<<*(it);

s.erase(5);//{1,3,4}

int count=s.count(1); // 1, note since in sets there are unique elemnts so a particular  element count should be either 1 or 0.

s.insert(5); //{1,3,4,5}
auto i1=s.find(3); //iterator pointing at 3
auto i2= s.find(5); //iterator pointing at 5
s.erase(i1,i2); // after erase {1,5}, i.e [first,last)
cout<<endl;
auto it= s.lower_bound(3); //the iterator points to the 1st index
auto it_1=s.upper_bound(5); //the iterator points to the next index of the 5 , that is 5th index.
cout<<it<<" "<<it_1;
}
