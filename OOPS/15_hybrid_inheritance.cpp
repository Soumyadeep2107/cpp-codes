// Hybrid inheritance is a combination of more than one type of inheritance.For example a child parent class relationship that follows multiple and heirarchichal inheritance can be called hybrid inheritance.
#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
        void func()
        {
            cout<<"It is from class A"<<endl;
        }
};
class E {
    public:
        void func_E(){
            cout<<"It is from class E";
        }
};
class B: public A{   // It is single inheritance.
    public:
    void func_b(){
        cout<<"It is from class B"<<endl;
    }
};
class C:public A ,public E
{
    public:
        void func_c()
        {
            cout<<"This is from class C"<<endl;
        }
};

int main()
{

}