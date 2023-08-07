#include<bits/stdc++.h>
using namespace std;
class des{

private:


public:
    int age;
    char *name;
    int roll_no;
    float cs_marks;
    static int timeToend; //static keyword data type variable which belongs to the class not the object, that is it can be acessed without creating any object.

    des() //constructor
    {
       cout<<"A simple constructor is called:"<<endl;
       name= new char[20];
    }

    ~des() // destructor.
    {
        cout<<"Destructor is called"<<endl;
    }

    static int random()
    {
        return timeToend;   //note in static function we cannot use the this keyword because it also doesn't belongs to the object rather it belongs to classes. we alsp cannot use non-static varibales in the static funtion.
    }
    // setter.
    void set_age(int age)
    {
        this->age=age;
    }
    void set_name(char *temp)
    {   
        name=temp;
    }
    //getters
    int get_age()
    {
        return age;
    }
    void get_name()
    {
        cout<<(*name)<<endl;
    }



};
int des :: timeToend=5;
int main()
{
    des d;
    d.set_age(23);
    cout<<des::timeToend<<endl; // acessed without the use of any object.
    // cout<<d.timeToend<<endl; //can also be acessed by objects but its not advisible;
    char ch[20]="Soumya";
    d.set_name(ch);
    cout<<d.get_age()<<endl;
    d.get_name();
    des* d1=new des;
    char ch1[20]="Deep";
    d1->set_name(ch1);
    d1->get_name();
    // note for the static creation of the object when the scope ends the destructor is called auutomatically ,but in the case of the dynamic creation of the object the dectructor will be called when the obejct is deleted manually.
    delete d1;

}