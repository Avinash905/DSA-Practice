//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    int row[4]={-1, 1, 0, 0};
    int col[4]={0, 0, -1, 1};
    string direction="UDLR";
    
    bool isValid(vector<vector<int>> &m, int n, int i, int j, vector<vector<bool>> &visited) {
        if(i>=0 && i<n && j>=0 && j<n && m[i][j] && !visited[i][j])return true;
        return false;
    }
    
    void solve(vector<vector<int>> &m, int n, int i, int j, vector<vector<bool>> &visited, string &path, vector<string> &ans) {
        if(i==n-1 && j==n-1){
            ans.push_back(path);
            return;
        }
        visited[i][j]=1;
        
        for(int k=0;k<4;k++) {
            if(isValid(m, n, i+row[k], j+col[k], visited)){
                path+=direction[k];
                solve(m, n, i+row[k], j+col[k], visited, path, ans);
                path.pop_back();
            }
        }
        visited[i][j]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<vector<bool>> visited(n, vector<bool> (n, 0));
        vector<string> ans;
        string path="";
        
        if(m[0][0]==0 || m[n-1][n-1]==0) return ans;
        
        solve(m, n, 0, 0, visited, path, ans);
        
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends