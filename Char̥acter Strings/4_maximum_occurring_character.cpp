#include<bits/stdc++.h>
using namespace std;
void counting_array(char ch,int *arr)
{   int num=0;
    if(ch>='a'&& ch<='z')
        {
           num= ch-'a';
           arr[num]++;
        }
    else
        {
            num=ch-'A';
            arr[num]++;
        }
}
char getMaxOccuringChar(string str)
{   int co_arr[26]={0}; //since 26 letters are there.
    char temp;
    for(int i=0; i<str.length(); i++)
    {
        temp= str[i];
        counting_array(temp,co_arr);
    }

    int maxi=-1;
    char store;
    int m;
    for(int j=0;j<26;j++)
    {
      if(maxi<co_arr[j])
        {
            m=j;
            maxi=co_arr[j];
        }
    }
    store = 'a'+ m;
    return store;

}
int main()
{
    string s;
    cin>>s;
    char ans= getMaxOccuringChar(s);
    cout<<"The Maximum occuring character in the string is:"<<ans<<endl;
    return 0;
}