#include<bits/stdc++.h>
using namespace std;
class student
{
    private:
    int id;
    char gender;


    public:
    int roll_no;
    int standard;
    char sub;

    int get_id() // getter function
    {   cout<<"The Id is:";
        return id;
    }
    void set_id(int i)
    {
       id=i; 
    }

    void set_gender(char g)   // setter function
    {
        gender=g;
    }
    char get_gender()
    {   cout<<"The gender is:";
        return gender;
    }
};
int main()
{
    student s;
    s.set_id(20); // we have first set the value of id(private data type) using setter function
    cout<<s.get_id()<<endl; // after that we get the value form the getter function.
    
    s.set_gender('f');
    cout<<s.get_gender();

}