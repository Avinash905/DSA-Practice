//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool isValid(vector<int> nums,int mid,int n,int K){
        int sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]%mid==0)sum+=nums[i]/mid;
            else sum+=nums[i]/mid+1;
        }

        if(sum<=K)return true;
        return false;
    }
    int smallestDivisor(vector<int>& nums, int K) {
        // Write your code here.
        // TC - O(nlog(max(nums)))
        // SC - O(1)

        int n=nums.size(),start=1,ans=0,
        end=*max_element(nums.begin(),nums.end());

        while(start<=end){
            int mid=start+(end-start)/2;

            if(isValid(nums,mid,n,K)){
                ans=mid;
                end=mid-1;
            }
            else start=mid+1;
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
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends