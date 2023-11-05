class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size(),st=0,end=m*n-1;

        while(st<=end){
            int mid=st+(end-st)/2,row=mid/n,col=mid%n;

            if(matrix[row][col]==target)return 1;
            else if(matrix[row][col]>target)end=mid-1;
            else st=mid+1;
        }

        return 0;
    }
};