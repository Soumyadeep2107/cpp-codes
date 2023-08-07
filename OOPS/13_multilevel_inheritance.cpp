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
class B: public A{   // It is single inheritance.
    public:
    void func_b(){
        cout<<"It is from class B"<<endl;
    }
};
class C:public B // it is called multilevel inheritance , where b got inherited from base class A and C got inherited from class B.
{
    public:
        void func_c()
        {
            cout<<"This is from class C"<<endl;
        }
};
int main()
{
    B b1;
    b1.func();
    C c1;
    c1.func_b();
    c1.func();
}
