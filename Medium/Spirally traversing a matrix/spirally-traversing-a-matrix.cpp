//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int> ans;
        int count=0,row=0,col=0;

        while(count<n*m){
            while(count<n*m && col<m && matrix[row][col]!=INT_MIN){
                ans.push_back(matrix[row][col]);
                matrix[row][col]=INT_MIN;
                col++;
                count++;
            }
            col--;
            row++;
            while(count<n*m && row<n && matrix[row][col]!=INT_MIN){
                ans.push_back(matrix[row][col]);
                matrix[row][col]=INT_MIN;
                row++;
                count++;
            }
            row--;
            col--;
            while(count<n*m && col>=0 && matrix[row][col]!=INT_MIN){
                ans.push_back(matrix[row][col]);
                matrix[row][col]=INT_MIN;
                col--;
                count++;
            }
            row--;
            col++;
            while(count<n*m && row>=0 && matrix[row][col]!=INT_MIN){
                ans.push_back(matrix[row][col]);
                matrix[row][col]=INT_MIN;
                row--;
                count++;
            }
            row++;
            col++;
        }

        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends