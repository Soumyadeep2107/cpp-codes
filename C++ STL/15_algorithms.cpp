//STL gives some algorithmic templates or function ,which can make our work very easy.
//Like Sorting, can be done very easily,without using bubble,insertion,selection etc sort.
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
bool comp(pair<int,int> p1,pair<int,int>p2) //its a comparator
{
    if(p1.second<p2.second)
    {
        return true;
    }
    return false; //else part.
    //if second part are same of pairs
    if(p1.first>p2.second)
    {
        return true;
    }
    return false; //else part.
}
int main()
{
 vector<int>v;
 v.push_back(1);
 v.push_back(3);
 v.push_back(2);
 v.push_back(17);
 v.push_back(9);
 v.push_back(10);
 v.push_back(6);
 cout<<"The unordered elements are given below"<<endl;
 for(auto it:v)
 {
    cout<<it<<" ";
 }
 cout<<endl;
// Now we will use the sort function to sort the given vector in increasing order
sort(v.begin(),v.end()); //that is sorting will done from start to begining.
//we could have sorted a particular portion of the vector,according to the requirement
// like sort(v.begin()+2,v.end()+4);
cout<<"The sorted vector is:";
 for(auto it1:v)
 {
    cout<<it1<<" ";
 }
 cout<<endl;
 //if we want to sort the vector in decreasing order than:-
//we wil do sort(v.begin(),v.end(),greater<int>);
//This will give the order in decending order.

pair<int,int>a[]={{1,2},{2,1},{4,1}};
//sort it according to second element 
//it second element is same,the sort
//it according to first element but in decreasing.
sort(a,a+3,comp); // this will give {4,1},{2,1},{1,2},where 3 is the size of the array.

//when we need to count te set bits of the binary number of a digit.
int num=7;
int cnt= __builtin_popcount(num); //this will give the number of setbits or 1 in the binary of 7
long long num1=1564981161544;
int cnt=__builtin_popcountll(num1); //for long long data type

string s="123";
sort(s.begin(),s.end());

do{
    cout<<s<<endl;
}while(next_permutation(s.begin(),s.end())); //this would print all the 6 permutation of 123.
// we we wont have sorted elements in the string and s=231, then it would have print only 3 permutation in ascenting order
//note once the all permutation is given  it give null value and loop stops.
int arr1[]={2,3,6,4,10};
int n=arr1.size();
int maxi= *max_element(arr1,arr1+n);
int mini=*min_element(arr1,arr1+n);
return 0;
}
