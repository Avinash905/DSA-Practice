//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string s) {
        // Code here
        // TC - O(n)
	    // SC - O(1)
	    int n=s.size(),zeroIdx=-1,oneIdx=-1,twoIdx=-1,ans=INT_MAX;
	    
	    for(int i=0;i<n;i++){
	        if(s[i]-'0'==0)zeroIdx=i;
	        else if(s[i]-'0'==1)oneIdx=i;
	        else if(s[i]-'0'==2)twoIdx=i;
	        if(zeroIdx!=-1 && oneIdx!=-1 && twoIdx!=-1){
    	        ans=min(ans,max({zeroIdx,oneIdx,twoIdx})-min({zeroIdx,oneIdx,twoIdx})+1);
	        }
	    }
	    return ans==INT_MAX?-1:ans;
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
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends