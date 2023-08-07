#include <bits/stdc++.h> 
// code-studio-question= Print Like A Wave.
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for(int j=0;j<mCols;j++)
    {
        if(mCols & 1)
        // if column is odd.
        {
           for(int i=nRows-1;i>=0;i--)
           {
            ans.push_back(arr[i][j]);
           } 
        }
        else { //if column is even
            for(int i=0;i<nRows;i++)
            {
                ans.push_back(arr[i][j]);
            }
        }
    }
    return;
    
}