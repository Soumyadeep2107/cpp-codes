#include<bits/stdc++.h>
using namespace std;
// rotate the matrix by 90 degrees.
void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin() , matrix.end()); // firts we are reversing the matrix.
        int row = matrix.size();
        // then we tranpose the matrix, and we get the rotated matrix by 90 degrees.
        for (int i = 0; i < row; i++) {
            for (int j = 0; j <= i; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        return;
    }
int main()
{
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);
}
