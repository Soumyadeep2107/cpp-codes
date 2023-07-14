#include<bits/stdc++.h>
using namespace std;
// 1st method for pass by reference.
// void update(int *n)  // using the pointers concept.
// {
//     *n+=1;
// }
// int main()
// {
//     int i=10;
//     update(&i);
//     cout<<i;
// }
//2nd methodto for pass by value.
void update(int &n) // here we used the concept of referece variable.
{
    n=n+1;
}
int main()
{
    int i=10;
    update(i);
    cout<<i;
}