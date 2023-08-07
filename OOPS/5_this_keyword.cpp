#include<bits/stdc++.h>
using namespace std;
class emp
{   private:

    public:

        int emp_id;
        char name[20];
        char gender;
        int salary;
        emp()
        {
            salary=0; // salary is 0 when the object is created.
        }
        int get_salary()
        {
            return salary;
        }
        void set_salary(int salary)
        {   // when the parmeter is same as the property name of the class then we will use 'this' keyword.
            // the below line means , current obeject ke salary mai bheja hua salary daal do.
            // this keyword is actually stores the address of the current object,or we can say the obejct which have called the fuctio right now..
            // we can use the this key word when multiple objects are created and they are accessing some fucntion simultaneously.
            this->salary=salary; 
        }
        void this_value()
        {
            cout<<"The this key word stores the address of the current obeject."<<this<<endl;
        }

        int get_empId()
        {
            return emp_id;
        }
        void set_empId(int emp_id)
        {
            this->emp_id=emp_id;
        }
};
int main()
{
    emp *e1=new emp; //dynamic  allocation
    e1->this_value(); // or we could have called like :- (*e1).this_value();
    cout<<"The address of the current object is :"<<e1<<endl;

}