//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        //code
        // TC - O(n)
        // SC - O(1)
        int freq[26]={0};
        int n=s.size(),i=0,j=0,ans=0;
        
        while(j<n){
            freq[s[j]-'a']++;
            ans=max(ans,j-i);
            
            if(freq[s[j]-'a']>1){
                while(s[i]!=s[j]){
                    freq[s[i++]-'a']--;
                }
                freq[s[i++]-'a']--;
            }
            j++;
        }
        ans=max(ans,j-i);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends