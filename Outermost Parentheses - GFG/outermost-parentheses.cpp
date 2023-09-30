//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        int brackets=0;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')brackets++;
            else brackets--;
            if(brackets>1 && s[i]=='(')ans+=s[i];
            else if(brackets>=1 && s[i]==')')ans+=s[i];
        }
        return ans;
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