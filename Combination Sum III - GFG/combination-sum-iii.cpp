//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void solve(int arr[],int K,int i,int N,int sum,vector<int> temp,vector<vector<int>>& ans){
        if(sum==N && temp.size()==K){
            ans.push_back(temp);
            return;
        }
        if(i>8 || sum>N)return;
        
        solve(arr,K,i+1,N,sum,temp,ans);
        temp.push_back(arr[i]);
        solve(arr,K,i+1,N,sum+arr[i],temp,ans);
        temp.pop_back();
    }
    vector<vector<int>> combinationSum(int K, int N) {
        // code here
        int arr[]={1,2,3,4,5,6,7,8,9};
        vector<vector<int>> ans;
        vector<int> temp;
        
        solve(arr,K,0,N,0,temp,ans);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends