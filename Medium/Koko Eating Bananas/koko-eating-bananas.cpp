//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool isValid(int N, vector<int>& piles, int H,int mid){
        int hours=0;
        
        for(int i=0;i<N;i++){
            if(piles[i]%mid==0)hours+=piles[i]/mid;
            else hours+=piles[i]/mid+1;
            
            if(hours>H)return false;
        }
        return true;
    }
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
        long long st=0,end=0,ans=0;
        
        for(int i=0;i<N;i++){
            if(piles[i]>end)end=piles[i];
        }
        
        while(st<=end){
            int mid=st+(end-st)/2;
            
            if(isValid(N,piles,H,mid)){
                ans=mid;
                end=mid-1;
            }
            else st=mid+1;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends