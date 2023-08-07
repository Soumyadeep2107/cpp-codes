#include<bits/stdc++.h>
using namespace std;
class emp
{
    public:
    int emp_id;
    char name[20];
    char gender;
    int salary;

    // emp()
    // {
    //     cout<<"The constructor is automatically invoked when object is created.";
    // }

    // parameterised constructor.
    emp(int sal)
    {
        salary =sal;
    }

    int get_empId()
    {
        return emp_id;
    }
    void set_empId(int id)
    {
        emp_id=id;
    }
};

int main()
{
    // Now when a object is created automatically by defuslt a function is called or invoked which is called constructor or a defualt constructor which have nothing inside its body.
    // a constructor is basiclly used for the initailisation of the properties of the class.
    // The constructor name is same as the name of the class without having any return type.
    // Note: When we make type of constructor(parameterised or non-parameterised ) the defualt constructor automatically et deleted and made constructed came into use

//Static creation of the object.

 emp e1(2000);  // since when the object is created the constructor is called so when constructor is made parameterised and the object is created statically or dynamically we have to send the parameter with obejct creation as argument.
 e1.set_empId(34);
 cout<<e1.get_empId()<<endl;

//  Dynamically creation of the object of the class.
emp *e2= new emp(2000);
(*e2).set_empId(37); // by using the dereference operator.
cout<<e2->get_empId()<<endl;     // by using the arrow operator we can acesss the properties of the class through objects.


}