//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int check(vector<vector<int>> mat,int mid,int R,int C){
        int count=0;
        for(int i=0;i<R;i++){
            count+=upper_bound(mat[i].begin(),mat[i].end(),mid)-mat[i].begin();
        }
        return count;
    }
    int median(vector<vector<int>> &mat, int R, int C){
        // code here
        // TC - O(R*logC*log(max-min))
        // SC - O(1)
        
        int start=INT_MAX,end=INT_MIN,ans=0;
        for(int i=0;i<R;i++){
            start=min(start,mat[i][0]);
            end=max(end,mat[i][C-1]);
        }
        while(start<=end){
            int mid=start+(end-start)/2;

            if(check(mat,mid,R,C)>(R*C)/2){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends