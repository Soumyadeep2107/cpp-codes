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
class C
{
    public:
        void func_c()
        {
            cout<<"Its from class C"<<endl;
        }
};
class B: public A,public C{   // It is multiple inheritance.
    public:
    void func_b(){
        cout<<"It is from class B";
    }
};
int main()
{
    B b1;
    b1.func();
    b1.func_c();
}