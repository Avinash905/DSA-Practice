//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    // your code here
    // TC - O(n)
    // SC - O(1)
    int i=0,j=0,n=s.size(),ans=0;
    int freq[26]={0};
    while(j<n){
        if(freq[s[j]-'a']!=0){
            ans=max(j-i,ans);
            while(s[i]!=s[j]){
                freq[s[i]-'a']--;
                i++;
            }
            i++;
            j++;
        }
        else{
            freq[s[j]-'a']++;
            j++;
        }
    }
    ans=max(j-i,ans);
    return ans;
}