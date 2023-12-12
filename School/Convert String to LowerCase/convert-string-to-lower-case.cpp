//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void solve(string &s,int i){
        if(i>=s.size())return;
        
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]-'A'+'a';
        }
        solve(s,i+1);
    }
    string toLower(string S) {
        // code here
        solve(S,0);
        return S;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.toLower(S) << endl;
    }
    return 0;
}

// } Driver Code Ends