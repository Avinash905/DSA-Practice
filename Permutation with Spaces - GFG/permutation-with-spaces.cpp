//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    void solve(string ip,string op,vector<string>& ans){
        if(ip==""){
            ans.push_back(op);
            return;
        }
        string op1=op;
        string op2=op;
        
        op1+=" ";
        op1+=ip[0];
        op2+=ip[0];
        ip.erase(ip.begin());
        
        solve(ip,op1,ans);
        solve(ip,op2,ans);
    }
    vector<string> permutation(string S){
        // Code Here
        vector<string> ans;
        string op="";
        op+=S[0];
        
        S.erase(S.begin());
        solve(S,op,ans);
        
        return ans;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends