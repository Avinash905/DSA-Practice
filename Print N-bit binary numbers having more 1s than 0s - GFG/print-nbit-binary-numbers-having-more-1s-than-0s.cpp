//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    void solve(int N,int one,int zero,string op,vector<string>& ans){
        if(N==0){
            ans.push_back(op);
            return;
        }
        string op1=op;
        op1+='1';
        solve(N-1,one+1,zero,op1,ans);
        
        if(one>zero){
            string op2=op;
            op2+='0';
            solve(N-1,one,zero+1,op2,ans);
        }
    }
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    // TC - O(2^N)
	    // SC - O(2^N)
	    vector<string> ans;
	    string op="";
	    solve(N,0,0,op,ans);
	    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends