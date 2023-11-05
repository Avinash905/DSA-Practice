class Solution {
public:
    bool binarySearch(vector<int>& matrix,int target){
        int st=0,end=matrix.size()-1;

        while(st<=end){
            int mid=st+(end-st)/2;

            if(matrix[mid]==target)return 1;
            else if(matrix[mid]>target)end=mid-1;
            else st=mid+1;
        }

        return 0;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size(),st=0,end=m-1;

        while(st<=end){
            int mid=st+(end-st)/2,firstEle=matrix[mid][0],lastEle=matrix[mid][n-1];

            if(lastEle==target)return 1;
            else if(target>=firstEle && target<lastEle){
                return binarySearch(matrix[mid],target);
            }
            else if(lastEle>target)end=mid-1;
            else st=mid+1;
        }

        return 0;
    }
};