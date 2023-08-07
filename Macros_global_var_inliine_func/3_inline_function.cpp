// inline functions are basically type of functions whose function calls are replaced by the piece of code present in the function.
// also by using the inline function we can increase the performance and also the use of stack space for function call is  also decreased
#include<bits/stdc++.h>
using namespace std;
inline int Getmax(int &a, int &b)  // we have used the reference variable so that no extra space is acquired while passing value to the function.
{
    return (a>b)?a:b;
}
int main()
{
    int a=1;
    int b=3;
    int res= Getmax(a,b); // instead of using if else we use tertiary expression/ternary operators to get the maximum of two.
    cout<<res<<endl;

    int c=20;
    int d= 22;
    int res1= Getmax(c,d); // insted of using the ternary operator several times we will use function.
    cout<<res1;
    return 0;   
}