//To check whether the string is palindrome using the functional recursoin method.
#include<iostream>
using namespace std;

bool ispalindrome(string s, int st, int en)
{
 if(st>=en)
 {
   return true; 
 }
 if(s[st]!=s[en])
 {
    return false;
 }
 
 return ispalindrome(s,st+1,en-1);
}
int main()
{
    string s="MADAM";
    int i=0;
    int size=5;
    bool ans=ispalindrome(s,i,size-1);
    // if(ans==true)
    // {
    //     cout<<"The string is palindrome";
    // }
    // else{
    //     cout<<"Not a palindrome";
    cout<<ans;
    return 0;
    }
