// object oriented programing is a type of programming technique where things revolve around the object and by using the objects in the program it will increase the efficency of progrma as well as the readability of the program.
#include<bits/stdc++.h>
using namespace std;

// Syntax of the class:- class is basically a user defined data type which has some properties.
class Hero
{
    // note if the acess modifier is not specified then by default the the properties of the class is always private.
private: // are those members which are accessible only from the class.
    // char gender;
    
public:     // public members are those members which can be accesible from any where of the program.
    char gender;
    char level;
    int health;
    int age;
    char Gender_re()
    {
        gender='F';
        return gender;
    }
};
class looser
{

};
 // note if the properties of the class is not defined then if the object is created for the class then its size would be 1 byte . else the size of the obejct is total size of the class properties.


int main ()
{
    Hero a; // a is called the object of the class Hero. And a have the property of the class Hero.
    looser b; // size of the empty class object is 1.
    cout<<sizeof(b)<<endl;
    cout<<sizeof(a)<<endl; // this will give the size of the object of the class as 16 but if calculated the size of the non-static data members/types ,we get 10 byte but extra 6 bytes assigned by the compiler while the padding allignment.
    a.health=999;
    a.level='A';
    cout<<a.health<<endl;
    cout<<a.Gender_re();

}