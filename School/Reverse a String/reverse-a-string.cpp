//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void solve(string &s,int i){
        if(i>=s.size()-i)return;
        
        swap(s[i],s[s.size()-i-1]);
        solve(s,i+1);
    }
    string revStr(string S) {
        // code here
        solve(S,0);
        return S;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.revStr(S) << endl;
    }
    return 0;
}

// } Driver Code Ends