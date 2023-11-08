//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int countFunc(vector<vector<int>> &matrix, int R, int C,int val){
        int count=0;
        
        for(int r=0;r<R;r++){
            count+=upper_bound(matrix[r].begin(),matrix[r].end(),val)-matrix[r].begin();
        }
        return count;
    }
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here
        int st=0,end=0,ans=0;
        
        for(int r=0;r<R;r++){
            end=max(end,matrix[r][C-1]);
            st=min(st,matrix[r][0]);
        }
        
        while(st<=end){
            int mid=st+(end-st)/2,count=countFunc(matrix,R,C,mid);
            
            if(count>(R*C)/2){
                ans=mid;
                end=mid-1;
            }
            else st=mid+1;
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