#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
        void func()
        {
            cout<<"This is from A"<<endl;
        }
};
class C
{
    public:
        void func(){
            cout<<"This is from C"<<endl;
        }
};
class B:public A,public C
{
    public :
        
};

int main()
{
    B b1;
    // b1.func(); // this will cause ambiguity because same function name is present in both the class.So that is why we will use the scope resolution operator.
    b1.A::func(); // this will call the class A's func
    b1.C::func();  // this will call the class B's func
    return 0;
}
