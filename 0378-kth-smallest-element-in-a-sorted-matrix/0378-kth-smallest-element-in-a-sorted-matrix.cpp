class Solution {
public:
    int countFunc(vector<vector<int>>& matrix,int k,int n,int val){
        int count=0;
        for(int r=0;r<n;r++){
            count+=upper_bound(matrix[r].begin(),matrix[r].end(),val)-matrix[r].begin();
        }
        return count;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size(),st=matrix[0][0],end=matrix[n-1][n-1],ans=0;

        while(st<=end){
            int mid=st+(end-st)/2,
            count=countFunc(matrix,k,n,mid);

            if(count>=k){
                ans=mid;
                end=mid-1;
            }
            else st=mid+1;
        }
        return ans;
    }
};