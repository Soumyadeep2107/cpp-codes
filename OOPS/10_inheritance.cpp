// Inheritace is one of the important pillar of the object oriented programming where a class inherits the properties and the behaviour of an existing class into a new class.
#include<bits/stdc++.h>
using namespace std;
class human   // This is called a super class or base class.
{
    private:
        float height;
        int weight;

    protected:
            void greeting()
            {
                cout<<"Hello Everyone"<<endl;
            }
            string occupation;
    public :
        char* color;
        int age;

        void eating()
        {
            cout<<"The human is eating";
        }

        void sleeping()
        {
            cout<<"The human is sleeping";
        }

};
class male: public human   // inheriting the class human properties in public mode in class male.The derived class is also called sub class.
{

    // if we derive a subclass from a public base class in public mode then the public members will become public in the derived class , private members will be private and the protected will be protected in the derived class.
    private:
            //function call
            
    public:
        int attack;
        void power()
        {
            cout<<"Male have great power:"<<endl;
        }
        void  greet_us()
        {
            this->greeting();  // Protected members are kind of priate also but these are the followig things protected members are used within the own class and also when a class is inherited then that chils class can also access it within it.

        }
};

class  female: private human{  // when privately inherited then the public ,private ,and protected all members become in-acessible. 

    public:
        int length_hairs;
        string body_type;

};

class fighter:protected human{ // when the base class is inherited in protected mode then public and protected members of base class are inheited in protected mode only but private members are inacessible.
 private :
     void lets_fight()
     {
        cout<<"Lets fight then:"<<endl;
     }
public:
    char strength_level;
protected:
    int speed;

};
int main()
{
 male m1;
 m1.greet_us();
 female f1;
//  f1.sleeping();  // as we can say its inacessible.
fighter fi;
// fi.age; // since in protected mode the base class is inherited that is why its inacessible.
}