// when a functin calls itself until a specified condition is met.
#include<iostream>
using namespace std;
int count=0;
// void func()
// {   
//     if(count<4) //The function func will call itself till count value is less than 4. This is base condition.
//     {
//       cout<<count<<endl;
//       count++;
//       func(); 
//     }
//     else {
//         return;
//     }
void func()
{
    if(count==4) //base case or base condition
    {
        return;
    }
    else{
        cout<<count<<endl;
        count++;
        func();
    }
}   
int main()
{
    func();
    return 0; 
}