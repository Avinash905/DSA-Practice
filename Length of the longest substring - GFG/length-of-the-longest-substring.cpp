//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        //code
        // TC - O(N)
        // SC - O(26)
        int i=0,j=0,ans=0;
        int freq[26]={0};
        
        while(j<s.size()){
            freq[s[j]-'a']++;
            if(freq[s[j]-'a']>1){
                ans=max(ans,j-i);
                
                while(freq[s[j]-'a']>1){
                    freq[s[i]-'a']--;
                    i++;
                }
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