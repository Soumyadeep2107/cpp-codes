#include<bits/stdc++.h>
using namespace std;
// 443. String Compression --leet code problem
int compress(vector<char>& chars) {
        int n = chars.size();
        if(n == 1) return 1;
        int index=0;
        int i = 0;
        int j=i+1;

        while(i < n){
            
            while(j < n && chars[i] == chars[j]){ // loop will be terminated jab puri vector traverse ho jayegi ya fir jab koi new charater ya different character aa jayega.
                j++;
            } 
            //add character to ans;
            chars[index++] = chars[i];
            //add count to ans
            int count=j-i;
            if(count > 1){
                //case for count > 10
                string charCount = to_string(count);
                for(auto c : charCount){
                    chars[index++] = c;
                }
            }
            i=j;
        }
        return index;

    }

int main ()
{
    vector<char>chars= {'a','a','b','b','c','c','c'};
    int res= compress(chars);
    cout<<res;
}
