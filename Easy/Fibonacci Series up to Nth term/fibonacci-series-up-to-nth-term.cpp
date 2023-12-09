//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> solve(int N,vector<long long>& ans){
        if(N<2){
            return ans;
        }
        solve(N-1,ans);
        int n=ans.size()-1;
        ans.push_back(ans[n]+ans[n-1]);
        return ans;
    }
    vector<long long> Series(int N) {
        // COde here
        vector<long long> ans;
        ans.push_back(0);
        ans.push_back(1);
        
        return solve(N,ans);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<long long> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends