//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void solve(vector<int>& A,int B,int i,int sum,vector<int>& temp,vector<vector<int>>& ans){
        if(sum==B){
            ans.push_back(temp);
            return;
        }
        if(i>=A.size() || sum>B)return;
        
        temp.push_back(A[i]);
        solve(A,B,i+1,sum+A[i],temp,ans);
        temp.pop_back();
        
        while(i<A.size() && A[i]==A[i+1])i++;
        solve(A,B,i+1,sum,temp,ans);
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        // Write your code here
        vector<vector<int>> ans;
        vector<int> temp;
        
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,0,0,temp,ans);
        return ans;
    }
};


//{ Driver Code Starts.
int main() {

    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i) {
            cin >> candidates[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++) {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";

        // cout << "\n~\n";
    }
    fclose(stdout);
    return 0;
}

// } Driver Code Ends