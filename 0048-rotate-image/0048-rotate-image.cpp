class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

        for(int r=0;r<n;r++){
            for(int c=0;c<r;c++){
                swap(matrix[r][c],matrix[c][r]);
            }
        }

        for(int r=0;r<n;r++){
            for(int c=0;c<n/2;c++){
                swap(matrix[r][c],matrix[r][n-c-1]);
            }
        }
    } 
};