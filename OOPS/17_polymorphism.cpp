#include<bits/stdc++.h>
using namespace std;

// it is a concept that allows you to perform a single action in different ways.
// there are two types of polymorphism in c++
// compile time and run time polymorphism.
// in compile time polymorphism is a type of static polymorphism.This can be achieved from function overloading and operator overloading.
class A{

    private:

    public:
        // note in function overloading the ,name of the function will be same but the but the arguments will be different.The differnt return type of the function doesn't overload functions.

        void func()
        {
            cout <<"Hello This is 1st function"<<endl;
            return;
        } 

        int func(string  name)
        {
            cout<<"Hello this is "<<name<<endl;
            return 1;
        } 

};
// another type of the compile time polymorphism is operator overloading.
// that is we can use a operator for different work or puprose.
class B{
    private:

    public:

        int a;
        int b;

        void operator +(B &obj)
        {
            // int value1= this->a;
            // int value2= obj.b;
            // cout<<"Output:"<<value1-value2<<endl;

            cout<<"Hello everyone";
        }

};

int main()
{
    B obj1,obj2;
    obj1.a=7;
    obj2.b=2;

    obj1+obj2;

}