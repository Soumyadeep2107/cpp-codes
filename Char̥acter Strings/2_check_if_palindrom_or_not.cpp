#include<bits/stdc++.h>
using namespace std;
char tolowerCase(char ch)
{
    if((ch>='a' && ch<='z')||(ch>='0' && ch<='9'))
        return ch;
    else{
        char temp;
        temp=ch-'A'+'a';
        return temp;
    }
}
bool isconsider(char ch)
{
    if((ch>='A'&& ch<='Z')||(ch>='a'&& ch<='z')||(ch>='0'&& ch<='9'))
        return true;
    return false;
}
bool ispalindrome(string s)
{
    int start=0;
    int end=s.length()-1;
    while(start<=end)
    {
        if(isconsider(s[start])==false)
        {
            start++;
        }
        else if(isconsider(s[end]==false))
        {
            end--;
        }
        else if(tolowerCase(s[start])==tolowerCase(s[end]))
        {
            start++;
            end--;
        }
        return false;
    }
    return true;
}
int main()
{ 
    string s="MADAM";
    bool ans=ispalindrome(s);
    cout <<ans;
}