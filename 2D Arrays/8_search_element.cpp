//Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.
#include<bits/stdc++.h>
using namespace std;
// we will apply binary search in each sorted row.
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    //    int n_cols= matrix[0].size();
    //     int n_rows= matrix.size();

        // BRUTE FORCE TECHNIQUE, where we are searching in every row
        
        // int count= n_cols*n_rows;
        // int mid;
        // for(int i=0; i< n_rows;i++)
        // {   int start = 0;
        //     int end = n_cols-1;
        //     mid= start+(end-start)/2;
         
        //     while(start<=end)
        //     {   int element = matrix[i][mid];
                
        //         if(element==target)
        //             return true;
                
        //         else if(element<target)
        //         {
        //             start= mid+1;
        //         }
        //         else
        //         {
        //            end=mid-1; 
        //         }
        //          mid= start+(end-start)/2;
        //     }
        // }
        
        // MORE OPTIMISED SOLUTION:- we are just making the search space small.
        int n_cols= matrix[0].size();
        int n_rows= matrix.size();
        int rowIndex=0;
        int colIndex=n_cols-1;
        while(rowIndex<n_rows && colIndex>=0)
        {
            int element = matrix[rowIndex][colIndex];
            
            if(element<target)
            {
                rowIndex++;
            }
            else if (element== target)
                return true;
            else 
                colIndex--;
        
        }
        return false ;    
    }