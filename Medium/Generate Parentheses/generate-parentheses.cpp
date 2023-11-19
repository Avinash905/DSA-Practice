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
    void solve(int n,int o,int c,string temp,vector<string>& ans){
        if(o==n && c==n){
            ans.push_back(temp);
            return;
        }
        if(o<n)solve(n,o+1,c,temp+"(",ans);
        if(o>c)solve(n,o,c+1,temp+")",ans);
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here
        vector<string> ans;
        solve(n,0,0,"",ans);
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