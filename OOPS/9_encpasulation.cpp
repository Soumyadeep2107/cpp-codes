// encapsulation:- wrapping of the data members and functons in a single unit is called encapsulation.
// and fully encapsulated class can be defined as when all the data members and function are private and cannot be acessed by any class . it can be be only acessed within the class where they are defined.
// Encapsulation gives better security by hiding the data's internal information.
// encpasulation code is better for unt testing.
//encapsuation help to make the class read only(by using getters only).
// code reusability  is also the another advantage given by the encapsulation.

#include<bits/stdc++.h>
using namespace std;
class employee
{
    private:
    int *age;
    string name;
    char* dept;
    int sal;

    public:
        employee()

        {   age=new int;
            cout<<"This is a Simple consructor:"<<endl;
        }
    void readOnly_values()
    {
        *age=22;
        name="Soumyadeep";
    }

    void get_values()
    {
        cout<<*age<<endl;
        cout<<name;
        return;
    }

};
int main()
{
  employee e1;
  e1.readOnly_values(); // we invoke this functions so that the values get initiaised.
  e1.get_values();
  return 0;
}