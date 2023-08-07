#include<bits/stdc++.h>
using namespace std;
// This approach will give TLE.
string removeDuplicates(string s) {
        // int i=0;
        // int j=i+1;
        // int str_l=s.length();
        // while(i<str_l)
        // {
        //     if(s[i]==s[j])
        //     {
        //         s.erase(i,2);
        //         i=0;
        //         j=i+1;
        //         str_l=s.length();
        //     }
        //     else {
        //     i++;
        //     j++;
        //     str_l=s.length();
        //     }
        // }
        // return s;
        string temp = "";
        int i = 0;
        
        while (i < s.length()) {
            if (temp.empty() || s[i] != temp.back()) {
                temp.push_back(s[i]);
            } 
            else {
                temp.pop_back();
            }
            i++;
        }
        
        return temp;
    
        }
int main()
{
    string s="abbaca";
    string res=removeDuplicates(s);
    cout<<res;

}