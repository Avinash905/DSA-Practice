//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        int ans=INT_MAX,i=0,j=0,arr[3]={0};
        
        while(j<S.size()){
            arr[S[j]-'0']++;
            
            while(i<j && arr[S[i]-'0']>1){
                arr[S[i]-'0']--;
                i++;
            }
            
            if(arr[0] && arr[1] && arr[2])ans=min(ans,j-i+1);
            j++;
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