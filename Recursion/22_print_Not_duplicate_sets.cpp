#include<bits/stdc++.h>
using namespace std;
void printUniquesubsets(int ind, vector<int>&arr,vector<int>&ds,vector<int>&ans)
    {
        // if(ind==arr.size()) //no need to put this if condtion ,because recursio auto matically get stoped at the for loop.
            // {
                for(auto it:ds)
                {   if(ds.empty()==true)
                        cout<<"{}"<<" ";
                    cout<<it<<" ";
                }
                cout<<endl;
            // }
        for(int i=ind; i<arr.size();i++)
        {
            if(i>ind && arr[i]==arr[i-1])
                continue;
            ds.push_back(arr[i]); //ek elemet ko dala
            printUniquesubsets(i+1,arr,ds,ans); //fir ds ko pass on kar diya, agar base condition match kiya,then return
            ds.pop_back(); // fir dale huye element ko nikal denge.
        }
    }
int main()
{
    vector<int>arr={1,3,2,2,3,2};
    sort(arr.begin(),arr.end());
    vector<int>ds;
    vector<int>ans;
    printUniquesubsets(0,arr,ds,ans);

}