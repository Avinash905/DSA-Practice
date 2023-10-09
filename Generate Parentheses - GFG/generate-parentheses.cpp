//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void solve(int n,int open,int close,string op,vector<string>& ans){
        if(open==n && close==n){
            ans.push_back(op);
            return;
        }
        if(open==close){
            solve(n,open+1,close,op+'(',ans);
        }
        else{
            if(open<n){
                string op1=op;
                op1+='(';
                solve(n,open+1,close,op1,ans);
            }
            string op2=op;
            op2+=')';
            solve(n,open,close+1,op2,ans);
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        // TC - O(2^n)
        // SC - O(n)
        vector<string> ans;
        string op="";
        solve(n,0,0,op,ans);
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
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends