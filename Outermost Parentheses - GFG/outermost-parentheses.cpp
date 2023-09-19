//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& S) {
        // code here
        // TC - O(n)
        // SC - O(n)
        string res;
 
        int count = 0;
     
        for (char c : S) {
            if (c == '(' && count++ > 0)
                res += c;
            if (c == ')' && count-- > 1)
                res += c;
        }
     
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends