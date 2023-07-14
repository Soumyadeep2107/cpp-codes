// vector is basically a dynamic arry, which can increase or decrease its size according to its requirement.
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int> v;
    cout<<v.capacity()<<endl;//initially the capacity of the vector is 0.
    v.push_back(1);

    cout<<v.capacity()<<endl; //capacity goes to 1
    v.push_back(2);
    
    cout<<v.capacity()<<endl; //capacity goes to 2
    v.push_back(3);

    cout<<v.capacity()<<endl; //capacity goes to 4
    v.push_back(4);
    //size() gives the number of element present in the vector.
    // capacity() gives the amount of space given or allocated to the vector, irrespective of the number of present in the vector .

    cout<<"Presently the size of the vector is:"<<v.size()<<endl;
    v.emplace_back(5); //works same as push back but it is relatively faster.
    cout<<"Size:"<<v.size()<<" "<<"Capacity:"<<v.capacity()<<endl;

    vector<int>v1(5); //this will create a vector of size 5. here all the 5 elements by default will 0.
    cout<<"Size:"<<v1.size()<<" "<<"Capacity:"<<v1.capacity()<<endl;

    vector<int>v2(5,20); //this will also create a vector of size with all elements as 20.

    //iterator can be defined as the pointer which points on the address of the element in the vector, and *(it), basically gives value at the address that it is point.

    //vector<int>::iterator it; // syntax to create an iterator.


    for(auto it=v2.begin();it!=v2.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    //to make the code smaller we can use auto which automatically assign it as iterator with out declaring 'it' as iterator. auto keyword automatically assign the data type of variable according to the value stored in it.

    for(auto it:v2)  //for each loop, where it is not a iterator ,the it moves across the element of the vector, and elements are int , so it will be also int due to auto and directly prints the elements.
    {
        cout<<it<<" ";
    }
    cout<<endl;

    vector<int>v3;
    v3.push_back(10);
    v3.push_back(20);
    v3.push_back(30);
    v3.push_back(40);
    v3.push_back(50);

    // cout<<v3.capacity();
    cout<<"The Elements in the vector are:"<<endl; //{10,20,30,40,50}
    for(auto it:v3)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    //now we will erase elements
    v3.erase(v3.begin()+1,v3.begin()+3);// [start,end) --> {10,40,50}
    //that is in erase function eerase elemnts from the starting element to the element before the end element. 

    cout<<"The Elements in the vector after erasing are:"<<endl; 
    for(auto it:v3)
    {
        cout<<it<<" ";
    } 
    cout<<endl;
    //insert function
    vector<int> v4(2,100);     //{100,100}
    v4.insert(v4.begin(),200);   //{200,100,100}--> that is it insert in the begin of th vector.
    v4.insert(v4.begin()+1,2,300); //{200,300,300,100,100};
    //that is from begin+1 to 2 places insert 300.
    cout<<v4.size();//how many elements in the vector are there in the vector.

    //{200,300,300,100,100}
    v4.pop_back(); //{200,300,300,100}

    //v3-->{10,40,50}
    //v4-->{200,300,300,100}
    v3.swap(v4); //v4--{10,40,50}  v3-->{200,300,300,100}

    v3.clear(); //clear the entire vector.
    cout<<v3.empty(); // checks wether the vector is empty or not.
    
    












}