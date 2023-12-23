//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
        void solve(vector<int>nums,int i,int currSum,int& count,int m){
            if(i>=nums.size()){
                if(currSum>=m && currSum%m==0)count++;
                return;
            }
            solve(nums,i+1,currSum,count,m);
            solve(nums,i+1,currSum+nums[i],count,m);
        }
		int DivisibleByM(vector<int>nums, int m){
		    // Code here
		    int count=0;
            solve(nums,0,0,count,m);
            return count>0;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans  = ob.DivisibleByM(nums, m);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends