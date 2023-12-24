//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void solve(string s,int i,set<string>& temp){
            if(i>=s.size()){
                temp.insert(s);
                return;
            }
            for(int idx=i;idx<s.size();idx++){
                swap(s[i],s[idx]);
                solve(s,i+1,temp);
                swap(s[i],s[idx]);
            }
        }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    set<string> temp;
		    vector<string> ans;
            solve(S,0,temp);
            for(auto i:temp){
                ans.push_back(i);
            }
            return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends