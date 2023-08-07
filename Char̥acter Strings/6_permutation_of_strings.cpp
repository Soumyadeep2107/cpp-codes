
// Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

#include<bits/stdc++.h>
using namespace std;
bool checkEqual(int * arr1,int *arr2)
{
    for(int i=0;i<26;i++)
    {
        if(arr1[i]!=arr2[i])
        {
            return false;
        }
    }
    return true;
}
 bool checkInclusion(string s1, string s2)
{
    int count1[26]={0};
    int num;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]>='a'&& s1[i]<='z')
        {
            num=s1[i]-'a';
            count1[num]++;
        }
    }
    int wl=s1.length();
    int i=0;
    int count2[26]={0};
    //Pehla window ke checking ke liye.
    while(i<wl && i<s2.length()) // if length of the s1 is greater than the s2 then the condition will be false.
    {
        if(s2[i]>='a'&& s2[i]<='z')
        {
            int ind=s2[i]-'a';
            count2[ind]++;
        }
        i++;
    }
    if(checkEqual(count1,count2))
    {
        return true;
    }
    // baki ke windows ke liye process karna hai
    while(i<s2.length())
    {
        if(s2[i]>='a'&& s2[i]<='z')
        {
            int ind= s2[i]-'a';
            count2[ind]++;
        }
        char oldC=s2[i-wl];
        int temp= oldC-'a';
        count2[temp]--;
        i++;
    if(checkEqual(count1,count2))
    {
        return true;
    }
    }
    return false;
}

