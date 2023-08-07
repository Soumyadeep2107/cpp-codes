#include<bits/stdc++.h>
using namespace std;
class emp
{
    public:
    int emp_id;
    char name[20];
    char gender;

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
//Static creation of the object.
 emp e1;
 e1.set_empId(34);
 cout<<e1.get_empId()<<endl;

//  Dynamically creation of the object of the class.
emp *e2= new emp;
(*e2).set_empId(37); // by using the dereference operator.
cout<<e2->get_empId()<<endl;     // by using the arrow operator we can acesss the properties of the class through objects.


}