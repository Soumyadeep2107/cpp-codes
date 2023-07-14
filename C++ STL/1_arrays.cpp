#include<iostream>
#include<array>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5}; //both the normal and STL array are static in nature.
    array<int,5>a={1,2,3,4,5};
    int size= a.size();
    for(int i=0; i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"array is empty or not:"<<a.empty()<<endl;
    cout<<"Element at the 2nd index is:"<<a.at(2)<<endl;
    cout<<"First element:"<<a.front()<<endl;
    cout<<"Last element:"<<a.back()<<endl;
    return 0;
}