//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        // TC - O(n)
        // SC - O(n)
        string res="";
        int start=0,openCount=0,closeCount=0;
     
        for (int i=0;i<s.size();i++){
            if (s[i]=='(')openCount++;
            if (s[i]==')')closeCount++;
            
            if(openCount==closeCount){
                res+=s.substr(start+1,i-start-1);
                start=i+1;
            }
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