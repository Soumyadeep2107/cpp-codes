#include<bits/stdc++.h>
using namespace std;

// there are different types of inheritance 
// single inheritance , multiple inheritance, multilevel inheritance, hierarchical inheritace, hybrid inheritance.

class A
{
    public:
        void func()
        {
            cout<<"It is from class A";
        }
};
class B: public A{   // It is single inheritance.
    public:
    void func_b(){
        cout<<"It is from class B";
    }
};
int main()
{
    B b1;
    b1.func();
}