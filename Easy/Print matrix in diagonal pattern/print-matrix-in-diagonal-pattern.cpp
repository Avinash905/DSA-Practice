//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
        //Your code here
        vector<int> ans;
        int n=mat.size(),count=1,row=0,col=0;
        
        ans.push_back(mat[0][0]);
        
        while(count<n*n){
            if(count<n*n && col<n-1){
                col++;
                ans.push_back(mat[row][col]);
                col--;
                count++;
            }
            row++;
            
            while(count<n*n && row<n && col>=0){
                ans.push_back(mat[row][col]);
                col--;
                row++;
                count++;
            }
            col++;
            row--;
            
            if(count<n*n && row<n-1){
                row++;
                ans.push_back(mat[row][col]);
                row--;
                count++;
            }
            col++;
            
            while(count<n*n && row>=0 && col<n){
                ans.push_back(mat[row][col]);
                col++;
                row--;
                count++;
            }
            col--;
            row++;
        }
    
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends