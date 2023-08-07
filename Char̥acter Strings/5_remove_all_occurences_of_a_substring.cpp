#include<bits/stdc++.h>
using namespace std;
string removeOccurrences(string s,string part)
{
    while(s.length()!=0 && s.find(part)<s.length()) // return value-The position of the first character of the first match.
// If no matches were found, the function returns string::npos.
        s.erase(s.find(part),part.length());
    return s;
}
int main()
{
    string s;
    string oc;
    cout<<"Enter the String:"<<endl;
    getline(cin,s);
    cout<<"Enter the part of String you want remove:"<<endl;
    getline(cin,oc);
    string res=removeOccurrences(s,oc);
    cout<<res;
    return 0;
}