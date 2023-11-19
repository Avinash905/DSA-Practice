//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
void solve(int n,int z,int o,string temp,vector<string>& ans){
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }
        solve(n,z,o+1,temp+"1",ans);
        if(z<o)solve(n,z+1,o,temp+"0",ans);
    }
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    vector<string> ans;
        solve(N,0,0,"",ans);
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