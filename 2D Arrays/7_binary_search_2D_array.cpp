#include<bits/stdc++.h>
using namespace std;
// time complexity for the given program will be log(n*m), where n*m is total number of elements in the 2-D array.
bool binary_search_2D(vector<vector<int>>matrix,int target)
{
    int n_cols=matrix[0].size();
    int n_rows=matrix.size();
    int total=n_cols*n_rows;
    int start=0;
    int end=total-1;
    int mid= start+ (end-start)/2;
    while(start>=end)
    {   int element= matrix[mid/n_cols][mid%n_cols];
        if(element== target)
        {
            return true;
        }
        else if (element<target)
        {
            start= mid+1;
        }
        else 
        {
            end=mid-1;
        }
        mid= start+ (end-start)/2;       
    }
    return 0;
}