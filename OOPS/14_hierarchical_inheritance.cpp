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
class C:public A // it is called heirarchical inheritance, both class B and C are getting inherited from class A. 
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
  C c1;
  b1.func();
  c1.func();
  return 0;
}