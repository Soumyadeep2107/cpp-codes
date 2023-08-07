#include<bits/stdc++.h>
using namespace std;
class hero
{
 private:

 public:
    int  health;
    char level;
    char *name;
    
 hero()
    {   name=new char[20];
        cout<<"simple constructor is called:"<<endl;
    }
 hero(hero& temp) {  // this is our made copy costructor where deep copying is followed.

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }   

 void set_name(char temp[])
 {
    strcpy(this->name,temp); // value at ch mai temp jo ki bheja hua value ai use daaal do.
 }
 void set_level(char temp)
 {
    this->level=temp;
 }

 void set_health(int temp)
 {
    this->health=temp;
 }
 void print()
 {
    cout<<"The name of the hero:"<<this->name<<endl;
    cout<<"The level of the hero:"<<this->level<<endl;
    cout<<"The health of the hero is:"<<this->health<<endl;
 }
};

int main()
{
    hero h1;
    char name[]="Soumaydeep";
    h1.set_name(name);
    h1.set_level('A');
    h1.set_health(999);

    h1.print();

    hero h2=h1; // copy of the object h1 is h2, so default copy constructor is called.The operator(=) used to copy the properties in the other object from other object is called assigment operator.

    h2.print();
    h1.name[0]='D';
    h1.print();
    h2.print();  //in this case the name of the hero also get changed even after the chnage is done for the object h1 , this is called shallow copying ,done by the default copy constructor.
    // it happen because we are refering to same string and the object is copied the address of that string is also copied and thus the h2.ch is referring to the same string.


    // to avoid this we will do deep copying,by killing the default copy constructor.
}