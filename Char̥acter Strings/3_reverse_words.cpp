#include<bits/stdc++.h>
using namespace std;
string reverse_word(string s)
{
    int i=0;
    int j=s.length()-1;
    while(i<=j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
    s.push_back(' ');
    return s;
    
}
string extract_word(string s)
{  
    string temp="";
    string ans="";
    for(int i=0;i<=s.length();i++)
    {   if((s[i]!=' ')||(s[i]!='\0'))
        {
            if((s[i]>='A'&& s[i]<='Z')||(s[i]>='a'&& s[i]<='z')||(s[i]>='0'&& s[i]<='9'))
            {
               temp.push_back(s[i]);
            }
        }
        if((s[i]==' ')||(s[i]=='\0'))
        {
            ans=ans+reverse_word(temp);
            temp="";
        }
    }
    if(ans[ans.size()-1]==' ')
       ans.pop_back();
    return ans;
}
int main()
{
    string s="The Sky is blue";
    cout<<s<<"->And the length of the string is:"<<s.length()<<endl;
    cout<<endl;
    s=extract_word(s);
    cout<<s<<"->the length of te string after the reverse of the word is:"<<s.length()<<endl;
    return 0;
}