#include<bits/stdc++.h>
using namespace std;
class emp
{
    private:
        int id;

    public:
        char name[20];
        int age;
        char gender;
        char dept[20];
    emp()
    {
        cout<<"Simple constructor called"<<endl;
    }
    // making a copy constructor
    emp(emp &temp)  // we have to pass by reference other wise it will create a copy of the opbject as in that case it will be pass by value and agian the copy constructor is called and it will stuck in the loop and will throw error.
    {
        this->age= temp.age;
        this->gender=temp.gender;
    }
    void set_age(int age)
    {
        this->age=age;
    }

    void set_gender(char gen)
    {
        gender =gen;
    }

    char get_gender()
    {
        return gender;
    }

    int get_age()
    {
        return age;
    }

};
int main()
{
  emp* e1= new emp;
  e1->set_gender('F');
  cout<<(*e1).get_gender();
  cout<<endl;
  (*e1).set_age(20);
  cout<<e1->get_age()<<endl;


  //now we will create another object of the class,dynamically.

  emp* e2 = new emp(*e1); // or statically -->emp e2(e1);
//    here basically what happened is that:-
/*
e2.age=e1.age;
e2.gender =e1.gender;
basically all the values of the property in e1 object get copied to e2 object.
*/

cout<<e2->age<<endl;
cout<<e2->gender<<endl; // we can see in the output the things get copied.

// when the value of the properties are to be copied to the other object then by default a construtor is called i.e copy constructor. we can also make our own copy constructor then the defualt copy constructor get deleted.

emp e3(*e1); // we have to send the e1 by using derefernce operator, it will denote the address of the e1.
emp e4(e3); // since e3 is not created dynamically it will the object only when it is sent
cout<<e4.get_age()<<endl;
cout<<e4.get_gender()<<endl;
  


}