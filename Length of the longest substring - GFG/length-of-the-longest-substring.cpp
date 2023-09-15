//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        int freq[26]={0};
        int ans=0,i=0,j=0;
        for(i=0;i<S.size();i++){
            if(freq[S[i]-'a']==0){
                freq[S[i]-'a']++;
            }
            else{
                ans=max(ans,i-j);
                while(S[j]!=S[i]){
                    freq[S[j]-'a']--;
                    j++;
                }
                j++;
            }
        }
        ans=max(ans,i-j);
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