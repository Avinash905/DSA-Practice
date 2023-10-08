//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    void solve(string s,string op,vector<string>& ans){
	        if(s==""){
	            if(op=="")return;
	            ans.push_back(op);
	            return;
	        }
	        string op1=op;
	        string op2=op;
	        
	        op2+=s[0];
	        s.erase(s.begin());
	        
	        solve(s,op1,ans);
	        solve(s,op2,ans);
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    // TC - O()
		    // SC - O(n*)
		    vector<string> ans;
		    string op="";
		    solve(s,op,ans);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends