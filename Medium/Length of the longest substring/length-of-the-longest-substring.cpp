//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        int freq[26]={0},ans=0,i=0;
        
        for(int j=0;j<S.size();j++){
            freq[S[j]-'a']++;
            
            while(i<S.size() && freq[S[j]-'a']>1){
                freq[S[i]-'a']--;
                i++;
            }
            ans=max(ans,j-i+1);
        }
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