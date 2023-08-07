#include<bits/stdc++.h>
using namespace std;
// One of the example of the run_time_polymorphism is Method overriding.
class Animal{

    private:

    public:
         void speak()
         {
            cout<<"Speaking"<<endl;
         }

};
class Dog:public Animal
{
        private:

        public:
            void speak()
            {
                cout<<"Barking"<<endl;
            }
};
// basically in method overriding , we have to use the inheritance, and also the name and type of the function should be same , just the content of the function should not be same.
int main()
{
   Dog d1;
   d1.speak();
   return 0; 
}
// next topic is abstraction ,go through the coding ninja guided path.