//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        // TC - O(N)
        // SC - O(N)
        int i=0,j=0,ans=0;
        unordered_map<char,int> freq;
        
        while(j<s.size()){
            freq[s[j]]++;
            if(freq.size()<k)j++;
            else if(freq.size()==k){
                ans=max(ans,j-i+1);
                j++;
            }
            else{
                while(freq.size()>k){
                    freq[s[i]]--;
                    if(freq[s[i]]==0)freq.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        return ans==0?-1:ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends