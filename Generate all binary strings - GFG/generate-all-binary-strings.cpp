//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void solve(int num,string op){
        if(op.size()==num){
            cout<<op<<" ";
            return;
        }
        solve(num,op+'0');
        if(op[op.size()-1]!='1')solve(num,op+'1');
    }
    void generateBinaryStrings(int num){
        //Write your code
        solve(num,"0");
        solve(num,"1");
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends