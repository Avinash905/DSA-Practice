//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool isValid(int n, int k, vector<int> &stalls,int mid){
        int cows=1,lastPos=stalls[0];
        
        for(int i=1;i<n;i++){
            if(stalls[i]-lastPos>=mid){
                cows++;
                lastPos=stalls[i];
            }
        }
        if(cows>=k)return true;
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        
        int st=1,end=stalls[n-1],ans=0;

        while(st<=end){
            int mid=st+(end-st)/2;
            
            if(isValid(n,k,stalls,mid)){
                ans=max(mid,ans);
                st=mid+1;
            }
            else end=mid-1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends