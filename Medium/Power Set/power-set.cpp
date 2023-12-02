//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    void solve(string ip,string op,vector<string>& ans){
	        if(ip.size()==0){
	            if(op!="")ans.push_back(op);
	            return;
	        }
	        
	        string op1=op,op2=op+ip[0];
	        ip.erase(0,1);
	        
	        solve(ip,op1,ans);
	        solve(ip,op2,ans);
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> ans;
		    solve(s,"",ans);
		    
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